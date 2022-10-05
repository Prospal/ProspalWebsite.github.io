USE TokoLaptopLab3

Insert into Brand VALUES
('LB001','Asus'),
('LB002','Acer'),
('LB003','Lenovo'),
('LB004','MSI'),
('LB005','HP'),
('LB006','Dell'),
('LB007','Samsung'),
('LB008','Razer'),
('LB009','Apple'),
('LB010','Toshiba');



Insert into Customer VALUES
('CU001', 'Salsa Makmur', 'Female', 'Jalan Lama 1', '081289394832', 'salsa12@gmail.com'),
('CU002', 'Sila',  'Female', 'Jalan Lama 2', '081289394833', 'sila11@gmail.com'),
('CU003', 'Jono Makmur', 'Male', 'Jalan Lama 3', '081289394834', 'jono56@gmail.com'),
('CU004', 'Agnes Makmur', 'Female', 'Jalan Lama 4', '081289394835', 'agnes79@gmail.com'),
('CU005', 'Joni Makmur', 'Male', 'Jalan Lama 5', '081289394836', 'joni68@gmail.com'),
('CU006','Cella Makmur','Female','Jalan Lama 6','081289394837','cella25@yahoo.com'),
('CU007','Willy','Male','Jalan Lama 7','081289394838','willy06@gmail.com'),
('CU008','Kevin Makmur','Male','Jalan Lama 8','081289394839','kevin.ardi@gmail.com'),
('CU009','Charles','Male','Jalan Lama 9','081289394840','charles.ren@yahoo.com'),
('CU010','Felicia','Female','Jalan Lama 10','081289394841','felis09@gmail.com');


insert into Vendor VALUES
('VE001','PT Makmur','makmurlaptop@gmail.com','081283765289','Jalan Suka Baru 1'),
('VE002','PT Sejahtera','sejahteralaptop@gmail.com','081283765290','Jalan Suka Baru 2'),
('VE003','PT Cahaya','cahayalaptop@gmail.com','081283765291','Jalan Suka Baru 3'),
('VE004','PT Bintang','bintanglaptop@gmail.com','081283765292','Jalan Suka Baru 4'),
('VE005','PT Maju','majulaptop@gmail.com','081283765293','Jalan Suka Baru 5'),
('VE006', 'PT Naik', 'naiklaptop@gmail.co', '081283765294', 'Jalan Suka Baru 6'),
('VE007', 'PT Ekspo', 'EkspoLaptop@gmail.com', '081283765295', 'Jalan Suka Baru 7'),
('VE008', 'PT Jaya', 'jayalaptop@gmail.com', '081283765296', 'Jalan Suka Baru 8'),
('VE009', 'PT Super', 'superlaptop@gmail.com', '081283765297', 'Jalan Suka Baru 9'),
('VE010', 'PT Plus', 'pluslaptop@gmail.com', '081283765298', 'Jalan Suka Baru 10');

insert into Staff VALUES
('ST001','Irwan Makmur','Male','irwan1@gmail.com','081289394827','Jl.baru 1','8000000'),
('ST002','Dimas Makmur','Male','dimas2@gmail.com','081289394828','Jl.baru 2','9000000'),
('ST003','Anggun Sejahtera','Female','anggun3@gmail.com','081289394829','Jl.baru 3','6500000'),
('ST004','Budi Sejahtera','Male','budi4@gmail.com','081289394830','Jl.baru 4','7500000'),
('ST005','Anggi Makmur','Female','anggi5@gmail.com','081289394831','Jl.baru 5','9500000'),
('ST006', 'Siti Sejahtera', 'Female', 'siti6@gmail.com','081289394832', 'Jl. baru 6', '8000000'),
('ST007', 'Angga Makmur', 'Male', 'angga7@gmail.com','081289394833', 'Jl. baru 7', '9000000'),
('ST008', 'Fadilah Sejahtera', 'Female', 'fadilah8@gmail.com','081289394834', 'Jl. baru 8', '8000000'),
('ST009', 'Anas Makmur', 'Male', 'anas9@gmail.com','081289394835', 'Jl. baru 9', '9000000'),
('ST010', 'Jo Sejahtera', 'Male', 'jo10@gmail.com','081289394836', 'Jl. baru 10', '6500000');


INSERT INTO LaptopPurchase VALUES
('LA001','LB001','ROG Zephyrus S17','20000000'),
('LA002','LB008','Blade 15','25000000'),
('LA003','LB004','GSE 66','50000000'),
('LA004','LB003','Legion 5','20000000'),
('LA005','LB009','Macbook pro','30000000');


Insert into PurchaseHeader VALUES
('PU001', 'ST001', 'VE001', '2022-04-06'),
('PU002', 'ST002', 'VE002', '2022-04-07'),
('PU003', 'ST003', 'VE003', '2022-05-08'),
('PU004', 'ST004', 'VE004', '2022-04-09'),
('PU005', 'ST005', 'VE005', '2022-04-10'),
('PU006', 'ST003', 'VE003', '2022-05-13'),
('PU007', 'ST004', 'VE004', '2022-04-14'),
('PU008', 'ST001', 'VE001', '2022-04-16'),
('PU009', 'ST003', 'VE003', '2022-05-17'),
('PU010', 'ST004', 'VE004', '2022-04-18'),
('PU011', 'ST002', 'VE002', '2022-04-19'), 
('PU012', 'ST003', 'VE003', '2022-05-20'),
('PU013', 'ST001', 'VE001', '2022-04-21'),
('PU014', 'ST005', 'VE005', '2022-04-22'),
('PU015', 'ST004', 'VE004', '2022-05-23');

INSERT INTO PurchaseDetail VALUES
('PU001', 'LA001',10),
('PU002', 'LA002',10),
('PU003', 'LA003',1),
('PU004', 'LA004',2),
('PU005', 'LA005',10),
('PU005', 'LA001',10),
('PU006', 'LA002',1),
('PU006', 'LA003',2),
('PU007', 'LA004',10),
('PU008', 'LA005',10),
('PU008', 'LA001',1),
('PU009', 'LA002',2),
('PU009', 'LA003',10),
('PU010', 'LA004',10),
('PU011', 'LA005',1),
('PU011', 'LA001',2),
('PU011', 'LA002',10),
('PU012', 'LA003',10),
('PU012', 'LA004',1),
('PU014', 'LA005',2),
('PU013', 'LA001',10),
('PU014', 'LA002',10),
('PU014', 'LA003',1),
('PU015', 'LA004',2),
('PU015', 'LA005',10);

Insert into [TransactionHeader] VALUES
('TR001', 'ST001', 'CU001', '2022-04-07'),
('TR002', 'ST002', 'CU002', '2022-04-08'),
('TR003', 'ST003', 'CU003', '2022-05-09'),
('TR004', 'ST004', 'CU004', '2022-04-10'),
('TR005', 'ST005', 'CU005', '2022-04-11'),
('TR006', 'ST001', 'CU001', '2022-05-12'),
('TR007', 'ST002', 'CU002', '2022-04-13'),
('TR008', 'ST003', 'CU003', '2022-04-14'),
('TR009', 'ST004', 'CU004', '2022-05-15'),
('TR010', 'ST005', 'CU005', '2022-04-16'),
('TR011', 'ST001', 'CU001', '2022-04-17'),
('TR012', 'ST002', 'CU002', '2022-05-18'),
('TR013', 'ST003', 'CU003', '2022-04-19'),
('TR014', 'ST004', 'CU004', '2022-04-20'),
('TR015', 'ST005', 'CU005', '2022-04-21');

INSERT INTO TransactionDetail VALUES 
('TR001','LA001', 2),
('TR001','LA004', 1),
('TR002','LA002', 2),
('TR003','LA001', 4),
('TR003','LA003', 2),
('TR004','LA004', 5),
('TR005','LA001', 8),
('TR005','LA005', 4),
('TR006','LA003', 2),
('TR007','LA002', 3),
('TR008','LA004', 6),
('TR008','LA003', 1),
('TR009','LA004', 3),
('TR010','LA002', 2),
('TR010','LA005', 3),
('TR010','LA003', 6),
('TR011','LA003', 1),
('TR011','LA001', 2),
('TR012','LA005', 7),
('TR012','LA002', 4),
('TR013','LA003', 2),
('TR014','LA001', 4),
('TR014','LA003', 9),
('TR015','LA002', 3),
('TR015','LA005', 2);