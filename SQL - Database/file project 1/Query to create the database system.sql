CREATE DATABASE TokoLaptopLab3

USE TokoLaptopLab3

CREATE TABLE Brand(
	BrandID CHAR (5) PRIMARY KEY CHECK (BrandID LIKE 'LB[0-9][0-9][0-9]'),
	BrandName VARCHAR (25) not null
);

CREATE TABLE Staff(
	StaffID CHAR (5)  PRIMARY KEY CHECK(StaffID LIKE 'ST[0-9][0-9][0-9]'),
	StaffName VARCHAR (25) not null,
	StaffGender VARCHAR (10) not null,
	StaffEmail VARCHAR(50) not null,
	StaffPhone VARCHAR (20) not null,
	StaffAddress VARCHAR (75) not null,
	StaffSalary INT not null
);

CREATE TABLE Customer(
	CustomerID CHAR(5) PRIMARY KEY CHECK (CustomerID LIKE 'CU[0-9][0-9][0-9]'),
	CustomerName VARCHAR(25)not null,
	CustomerGender VARCHAR(10)not null,
	CustomerAddress VARCHAR (75) not null,
	CustomerPhone VARCHAR (20) not null,
	CustomerEmail VARCHAR (50) not null
);

CREATE TABLE Vendor(
	VendorID CHAR(5) PRIMARY KEY CHECK (VendorID LIKE 'VE[0-9][0-9][0-9]'),
	VendorName VARCHAR(25) not null,
	VendorEmail VARCHAR(30)not null,
	VendroPhone VARCHAR (20)not null,
	VendorAddress VARCHAR (50)not null
);

CREATE TABLE LaptopPurchase(
	LaptopPurchaseID CHAR(5) PRIMARY KEY CHECK (LaptopPurchaseID LIKE 'LA[0-9][0-9][0-9]'),
	BrandID CHAR (5) FOREIGN KEY(BrandID) REFERENCES Brand(BrandID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	LaptopPurchaseName VARCHAR(50) not null,
	LaptopPurchasePrice INT not null
);

CREATE TABLE PurchaseHeader(
	PurchaseID CHAR(5) PRIMARY KEY CHECK (PurchaseID LIKE 'PU[0-9][0-9][0-9]'),
	StaffID CHAR (5) FOREIGN KEY(StaffID) REFERENCES Staff(StaffID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	VendorID CHAR (5) FOREIGN KEY(VendorID) REFERENCES Vendor(VendorID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	PurchaseDate DATE not null,
);

CREATE TABLE PurchaseDetail(
	PurchaseID CHAR(5) FOREIGN KEY REFERENCES PurchaseHeader(PurchaseID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	LaptopPurchaseID CHAR(5) FOREIGN KEY REFERENCES LaptopPurchase(LaptopPurchaseID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	PurchaseQuantity INT not null,
	PRIMARY KEY(PurchaseID, LaptopPurchaseID)
);

CREATE TABLE TransactionHeader(
	TransactionID CHAR (5) PRIMARY KEY CHECK (TransactionID LIKE 'TR[0-9][0-9][0-9]'),
	StaffID CHAR (5) FOREIGN KEY(StaffID) REFERENCES Staff(StaffID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	CustomerID CHAR (5) FOREIGN KEY(CustomerID) REFERENCES Customer(CustomerID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	TransactionDate DATE not null
);

CREATE TABLE TransactionDetail(
	TransactionID CHAR(5) FOREIGN KEY REFERENCES TransactionHeader(TransactionID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	LaptopPurchaseID CHAR(5) FOREIGN KEY REFERENCES LaptopPurchase(LaptopPurchaseID) ON UPDATE CASCADE ON DELETE CASCADE NOT NULL,
	TransactionQuantity INT not null,
	PRIMARY KEY(TransactionID, LaptopPurchaseID)
);
