USE TokoLaptopLab3


--1.	Display Customer Name (obtained from the CustomerName starts with 'Mr. '), CustomerGender, 
--and Total Transaction (obtained from the total transaction) 
--for each customer whose name contains at least two words and gender is 'Male'.

SELECT DISTINCT CONCAT('Mr ',cu.CustomerName) AS [Customer Name], 
cu.CustomerGender AS [CustomerGender], COUNT(th.CustomerID) AS [Total Transaction]
FROM Customer cu
JOIN TransactionHeader th ON cu.CustomerID = th.CustomerID 
WHERE cu.CustomerGender = 'Male' AND cu.CustomerName LIKE '% %'
GROUP BY th.CustomerID,cu.CustomerName,cu.CustomerGender
;


--2.	Display LaptopId, LaptopName, LaptopBrandName, LaptopPrice, 
--and Total of Laptop That Has Been Sold (obtained from the total quantity of 
--the laptop that has been sold) 
--for each laptop price more than 10000000, last three digit of laptop id must be an even number 
--and Total of Laptop That Has Been Sold more than 3

SELECT lp.LaptopPurchaseID, lp.LaptopPurchaseName,b.BrandName, lp.LaptopPurchasePrice,
SUM(td.TransactionQuantity) AS [Total of Laptop That Has Been Sold]
FROM LaptopPurchase lp
JOIN Brand b ON lp.BrandID=b.BrandID
JOIN TransactionDetail td ON lp.LaptopPurchaseID=td.LaptopPurchaseID
WHERE lp.LaptopPurchasePrice > 10000000
AND lp.LaptopPurchaseID IN (
	SELECT LaptopPurchaseID FROM LaptopPurchase lp
	WHERE (CAST(RIGHT(lp.LaptopPurchaseID,3) AS int) % 2)=0
)
GROUP BY td.LaptopPurchaseID,b.BrandName,lp.LaptopPurchaseName,lp.LaptopPurchaseID,lp.LaptopPurchasePrice
HAVING SUM(td.TransactionQuantity) > 3;

SELECT * FROM TransactionDetail

--3.	Display StaffId (obtained by replacing StaffId 'ST' with 'Staff '), StaffName, 
--Total Transaction Handled (obtained from the total transaction that has been handled), 
--and Maximum Quantity 
--in One Transaction (obtained from the maximum purchase in one transaction) 
--for every transaction that occurs in the month of April, 
--StaffGender equals to Female, and Total Transaction Handled more than 2.

SELECT REPLACE(st.StaffID, 'ST', 'Staff ') AS StaffId, st.StaffName,
COUNT(DISTINCT th.TransactionID) AS[Total Transaction Handled], 
MAX(td.TransactionQuantity)AS[Maximum Quantity in One Transaction]
FROM Staff st, TransactionHeader th, TransactionDetail td
WHERE st.StaffID=th.StaffID AND th.TransactionID = td.TransactionID
AND MONTH(th.TransactionDate) = 4 AND st.staffgender = 'Female' 
GROUP BY st.StaffName,st.StaffID
HAVING COUNT(DISTINCT th.TransactionID)>2
;


--4.	Display CustomerName, CustomerEmail, 
--Total Purchase (obtained from the total customer's purchase and ends with ' Purchase(s)'),
--and Total of Laptop That Has Been Purchased (obtained from the total of 
--laptop that has been purchased by customer) 
--for every CustomerEmail ends with '@gmail.com' and 
--Total of Laptop That Has Been Purchased more than 2

SELECT cu.CustomerName,cu.CustomerEmail,
COUNT(DISTINCT th.TransactionID) AS[Total Purchase],
SUM(td.TransactionQuantity) AS [Total of Laptop That Has Been Purchased]
FROM Customer cu
JOIN TransactionHeader th
ON th.CustomerID = cu.CustomerID
JOIN TransactionDetail td
ON td.TransactionID = th.TransactionID
WHERE cu.CustomerEmail LIKE '%@gmail.com'
GROUP BY cu.CustomerName, cu.CustomerEmail
HAVING SUM(td.TransactionQuantity)>2
;

--5.	Display VendorName (obtained from the VendorName replacing 'PT' with 'Perseroan Terbatas'), 
--PurchaseDate, Laptop ID Number (obtained from the last three characters of LaptopId), 
--and Quantity for every Quantity more than avarage of purchasing quantity and VendorName contains 'e'
--(alias subquery)


SELECT REPLACE(ve.VendorName,'PT','Perseroan Terbatas') AS [VendorName],ph.PurchaseDate,
RIGHT(pd.LaptopPurchaseID,3) AS [Laptop ID Number],
pd.PurchaseQuantity AS [Quantity more than avarage of purchasing quantity]
FROM Vendor ve
JOIN PurchaseHeader ph
ON ve.VendorID = ph.VendorID
JOIN PurchaseDetail pd
ON ph.PurchaseID = pd.PurchaseID,
(SELECT AVG(PurchaseQuantity)AS Average FROM PurchaseDetail)x
WHERE pd.PurchaseQuantity > x.Average
AND ve.VendorID IN (
	SELECT VendorID FROM Vendor
	WHERE CHARINDEX('e', VendorName) > 0
);

--6.	Display Name (obtained from LaptopBrandName in uppercase format and 
--LaptopName with space between them) 
--and Price (obtained from the LaptopPrice starts with 'Rp. ') 
--for every Price more than avarage of LaptopPrice and LaptopName contains 'e'.
--(alias subquery)

SELECT CONCAT(UPPER(b.BrandName),' ',lp.LaptopPurchaseName) AS [Display Name],
CONCAT('Rp. ',lp.LaptopPurchasePrice) AS [Price]
FROM LaptopPurchase lp
JOIN Brand b
ON lp.BrandID = b.BrandID,
(SELECT AVG(lp.LaptopPurchasePrice) AS Average FROM LaptopPurchase lp)x
WHERE lp.LaptopPurchasePrice > x.Average
AND lp.LaptopPurchaseID IN (
	SELECT lp.LaptopPurchaseID FROM LaptopPurchase lp
	WHERE CHARINDEX('e', lp.LaptopPurchaseName) > 0
);


--7.	Display Laptop ID Number (obtained from the last three characters of LaptopId), 
--LaptopName, Brand (obtained from LaptopBrand in uppercase format), 
--Price (obtain from LaptopPrice starts with 'Rp. '), and 
--Total of Laptop That Has Been Sold (obtained from the total quantity of the laptop that has been sold) 
--for every LaptopPrice more than 15000000 and 
--Total of Laptop That Has Been Sold more than avarage of total quantity of the Laptop that has been sold.
--(alias subquery)


SELECT RIGHT(lp.LaptopPurchaseID,3) AS [Laptop ID Number],
lp.LaptopPurchaseName AS [Laptop Name],UPPER(b.BrandName) AS [Brand],
CONCAT('Rp. ',lp.LaptopPurchasePrice) AS [Price], 
SUM(td.TransactionQuantity) AS [Total of Laptop That Has Been Sold more than avarage of total quantity ]
FROM LaptopPurchase lp
JOIN Brand b
ON lp.BrandID = b.BrandID
JOIN TransactionDetail td
ON td.LaptopPurchaseID = lp.LaptopPurchaseID
WHERE lp.LaptopPurchasePrice > 15000000
GROUP BY lp.LaptopPurchaseID,lp.LaptopPurchaseName,b.BrandName,lp.LaptopPurchasePrice
HAVING SUM(td.TransactionQuantity) > (
	SELECT AVG(Jumlah)
	FROM (
		SELECT td.LaptopPurchaseID, SUM(td.TransactionQuantity) AS Jumlah 
		FROM TransactionDetail td
		GROUP BY td.LaptopPurchaseID
	) AS iq
)
;

--8.	Display Staff First Name (obtained from the first word of StaffName), 
--Staff Last Name (obtained from the first space of StaffName until last character of the StaffName), 
--and Total of Laptop That Has Been Sold (obtained from the total quantity of the laptop that has been sold) 
--for every StaffName contains one space and 
--Total of Laptop That Has Been Sold more than average of total quantity of the laptop that has been sold.
--(alias subquery)


SELECT PARSENAME(REPLACE(s.StaffName, ' ', '.'), 2) AS [FirstName],
PARSENAME(REPLACE(s.StaffName, ' ', '.'), 1) AS [LastName],
SUM(td.TransactionQuantity) AS [Total of Laptop That Has Been Sold]
FROM Staff s, TransactionHeader th, TransactionDetail td
WHERE s.StaffID = th.StaffID AND th.TransactionID = td.TransactionID
AND s.StaffName LIKE '% %'
GROUP BY s.StaffName
HAVING SUM(td.TransactionQuantity) > (
	SELECT AVG(Jumlah)
	FROM (
		SELECT td.LaptopPurchaseID, SUM(td.TransactionQuantity) AS Jumlah 
		FROM TransactionDetail td
		GROUP BY td.LaptopPurchaseID
	) AS iq
)


--9.	Create a view named 'Vendor_Minimum_Transaction_View' to display Vendor ID 
--(obtained by replacing VendorId 'VE' with 'Vendor '), VendorName, 
--Total Transaction Handled (obtained from the total transaction that has been handled), 
--and Minimum Purchases in One Transaction (obtained from the minimum purchase in one transaction) 
--for every transaction that occurs in the month of May.

CREATE VIEW [Vendor_Minimum_Transaction_View] AS
SELECT REPLACE(v.VendorID,'VE','Vendor ') AS [Vendor ID]
,v.VendorName,COUNT(ph.VendorID) AS [Total Transaction Handled] 
,MIN(pd.PurchaseQuantity) AS [Minimum Purchases in One Transaction]
FROM Vendor v, PurchaseHeader ph, PurchaseDetail pd
WHERE v.VendorID=ph.VendorID AND ph.PurchaseID = pd.PurchaseID
AND MONTH(ph.PurchaseDate)=5
GROUP BY v.VendorID,v.VendorName

SELECT *FROM Vendor_Minimum_Transaction_View


--10.	Create a view named 'Staff_Max_Laptop_Purchased_View' to display StaffName, 
--StaffEmail (obtained from StaffEmail with uppercase format), 
--Total Purchase (obtained from the total Staff's purchase), 
--and Maximum of Laptop That Has Been Purchased in One Purchase 
--(obtained from the maximum purchase in one transaction) for every StaffEmail ends with '@gmail.com'

CREATE VIEW [Staff_Max_Laptop_Purchased_View] AS
SELECT s.StaffName,UPPER(s.StaffEmail) AS [StaffEmail], 
COUNT(ph.StaffID) AS [Total Purchase], 
MAX(pd.PurchaseQuantity) AS [Maximum of Laptop That Has Been Purchased in One Purchase]
FROM Staff s, PurchaseHeader ph, PurchaseDetail pd
WHERE s.StaffID = ph.StaffID AND ph.PurchaseID = pd.PurchaseID
AND s.StaffEmail LIKE '%@gmail.com'
GROUP BY s.StaffName,s.StaffEmail

SELECT * FROM Staff_Max_Laptop_Purchased_View
