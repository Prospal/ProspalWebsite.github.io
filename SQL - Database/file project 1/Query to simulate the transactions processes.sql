USE TokoLaptopLab3

-- Display customer name dan transaction date dengan harga laptop lebih dari 25000000
SELECT cu.CustomerName, tr.TransactionDate
FROM TransactionHeader tr JOIN Customer cu
ON tr.CustomerID = cu.CustomerID
WHERE EXISTS (
	SELECT * FROM TransactionDetail td
	JOIN LaptopPurchase lp ON td.LaptopPurchaseID = lp.LaptopPurchaseID
	WHERE lp.LaptopPurchasePrice > 25000000 AND tr.TransactionID = td.TransactionID)
;


-- Menunjukan vendor mana saja yang memberikan produk LA001
SELECT Vendor.VendorName, StaffName AS [Yang Melayani Membeli Produk LA001],ph.PurchaseDate
FROM PurchaseHeader ph
JOIN Staff ON ph.StaffID = Staff.StaffID
JOIN Vendor ON ph.VendorID = Vendor.VendorID
JOIN PurchaseDetail pd ON ph.PurchaseID = pd.PurchaseID
WHERE LaptopPurchaseID = 'LA001';