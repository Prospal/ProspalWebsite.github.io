Create Database Butik3
GO
Use Butik3
GO

create table ProductDetail(
	ProductDetailID varchar(6) Primary Key,
	Size	varchar(25) NOT NULL,
	ColorCode	varchar(100) NOT NULL,
	ColorName	varchar(100) NOT NULL
)

create table Vendor(
	VendorID	varchar(5) Primary Key, 
	CompanyName	varchar(100)NOT NULL,
	[Address] varchar(255)NOT NULL,
	[state]	varchar(15)NOT NULL,
	PostalCode	integer NOT NULL,
	PhoneNumber varchar(14) NOT NULL
)

create table Products(
	ProductID varchar(5) Primary key,
	Style	varchar(150) NOT NULL,
	Deskripsi	varchar(255)NOT NULL,
	ProductDetailID varchar(6) Foreign Key (ProductDetailID) references ProductDetail(ProductDetailID)ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	Quantity	int	NULL,
	Price	float NOT NULL,
	VendorID	varchar(5) Foreign Key (VendorID)references Vendor(VendorID)ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	[Image] varchar(255)
)


create table Staff(
	StaffID	varchar(5) Primary Key,
	[Name]	varchar(255) NOT NULL,
	PhoneNumber	varchar(255) NOT NULL,
	Position	varchar(255) NOT NULL,
	Email varchar(150) NOT NULL,
	[Password] varchar (150) NOT NULL,
	Username varchar(150)NOT NULL
)

create table Customer(
	CustomerID varchar(5) Primary Key,
	Nama varchar(100) NOT NULL,
	Alamat	varchar(255) NOT NULL,
	PhoneNumber	varchar(14) NOT NULL
) 

create table Payment(
	PaymentID	varchar(5) Primary Key,
	[Date]	DATE NOT NULL,
	Total	INT NOT NULL
)

create table CheckOut(
	CheckOutID	varchar(6) Primary Key NOT NULL,
	StaffID	varchar(5) Foreign key (StaffID) references Staff(StaffID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	CustomerID	varchar(5) Foreign key (CustomerID) references Customer(CustomerID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	PaymentID	varchar(5) Foreign key (PaymentID) references Payment(PaymentID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	ProductID	varchar(5) NOT NULL,
	Quantity INTEGER NOT NULL
)

INSERT INTO Customer (CustomerID,Nama,Alamat,PhoneNumber)
VALUES('CS001','Melinda','Jl. Pertiwi, No. 32','08132656556'),
	('CS002','Rico','Jl. Milenium, No. 39','08162985878'),
	('CS003','Frans','Jl. Permata, No. 10','08162545485')

INSERT INTO Vendor(VendorID,CompanyName,[Address],[state],PostalCode,PhoneNumber)
VALUES('VD001','PT. Meriah Jaya','Jl. Purnama, No. 45 ','East Jakarta','64626','08185366566'),
	('VD002','PT. Mustika Kusuma','Jl. Merdeka, No. 8','South Jakarta','655485','0856565556'),
	('VD003','PT. Kurniawan','Jl. Pemuda, No. 11','East Jakarta','624545','08187878564')

INSERT INTO ProductDetail(ProductDetailID,Size,ColorCode,ColorName)
VALUES('PRD001','30, 32, 34, 36, 38','#875806','Coklat disertai warna putih'),
	('PRD002','30, 32, 34, 36, 38','#103FDB','Biru disertai warna merah'),
	('PRD003','30, 32, 34, 36, 38','#E9B117','Coklat Muda disertai warna putih'),
	('PRD004','30, 32, 34, 36, 38','#493708','Warna hitam disertai biru dan putih'),
	('PRD005','30, 32, 34, 36, 38','#C94F09','Warna merah disertai coklat')

INSERT INTO Staff(StaffID,[Name],PhoneNumber,Position,Email,[Password],Username)
VALUES ('ST001','Test','081818181818','Kasir','test@mail.com','test','test'),
	('ST002','Anto','081641644444','Kasir','anto@mail.com','anto','anto'),
	('ST003','Budi','081808888373','Kasir','budi@mail.com','budi','budi')


INSERT INTO Products(ProductID,Style,Deskripsi,ProductDetailID,Quantity,Price,VendorID,[Image])
VALUES ('PR001','Asli dari Yogyakarta','Batik Parang Rusak','PRD001','2','100000','VD001','Gambar Batik'),
	('PR002','Asli dari CIrebon','Batik Mega Bendung','PRD002','2','50000','VD002','Gambar Batik'),
	('PR003','Asli dari Yogyakarta','Batik Kawung','PRD003','6','150000','VD001','Gambar Batik'),
	('PR004','Asli dari Pekalongan','Batik Tujuh Rupa Pekalongan','PRD004','6','75000','VD003','Gambar Batik'),
	('PR005','Asli dari Yogyakarta','Batik Sidoluhur','PRD005','8','200000','VD001','Gambar Batik')

INSERT INTO Payment(PaymentID,[Date],Total)
VALUES ('PA001','2021-3-25','100000'),
	('PA002','2021-4-3','50000'),
	('PA003','2021-5-25','450000'),
	('PA004','2022-7-25','1000000'),
	('PA005','2022-8-15','300000')

INSERT INTO CheckOut(CheckOutID,StaffID,CustomerID,PaymentID,ProductID,Quantity)
VALUES ('COI001','ST001','CS001','PA001','PR001','1'),
	('COI002','ST002','CS002','PA002','PR002','1'),
	('COI003','ST003','CS003','PA003','PR003','3'),
	('COI004','ST001','CS002','PA004','PR005','5'),
	('COI005','ST002','CS003','PA005','PR004','4')

--VIEW
--Membuat view dengan menampilkan productID, produk deskripsi, dan harga produk yang style asal nya dari yogyakarta & harga nya lebih dari 100000
CREATE  VIEW [Style Yogyakarta & Harga Melebihi 100000] AS
SELECT p.ProductID,p.Deskripsi,p.Price
FROM Products p
WHERE p.Style LIKE '% % Yogyakarta' 
AND p.Price > 100000

SELECT * FROM [Style Yogyakarta & Harga Melebihi 100000]

--VIEW
--Menampilkan payment yang total payment nya melebihi rata-rata
CREATE VIEW [Total Payment Yang Melebihi Rata-rata] AS
SELECT p.PaymentID,p.[Date],p.Total 
FROM Payment p,(
	SELECT AVG(Payment.Total)AS Average 
	FROM Payment)x
WHERE p.Total > x.Average

SELECT * FROM [Total Payment Yang Melebihi Rata-rata]

--Menampilkan Payment dengan total harga nya lebih dari 25000 & tanggal pembayarannya quarter kedua tahun 2021
SELECT *
FROM Payment p
WHERE p.Total > 25000 AND DATEPART(QUARTER,p.[Date])=2 AND YEAR(p.[Date])=2021

--Menampilkan nama staff,phone number stff dan position stff yang baru melayani 1 kali pembayaran
SELECT s.[Name],s.PhoneNumber,s.Position
FROM Staff s
JOIN CheckOut co
ON co.StaffID = s.StaffID
GROUP BY s.[Name],s.PhoneNumber,s.Position
HAVING COUNT(co.StaffID) = 1

--Menampilkan CompanyName, phone number, dan address dari vendor yang memiliki product lebih dari 1

SELECT v.CompanyName,v.PhoneNumber,v.[Address] 
FROM Vendor v, Products p
WHERE v.VendorID = p.VendorID
GROUP BY v.CompanyName,v.PhoneNumber,v.[Address]
HAVING COUNT(p.VendorID)>1