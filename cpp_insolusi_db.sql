-- phpMyAdmin SQL Dump
-- version 4.6.5.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 18, 2020 at 05:09 AM
-- Server version: 10.1.21-MariaDB
-- PHP Version: 5.6.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `cpp_insolusi_db`
--

-- --------------------------------------------------------

--
-- Table structure for table `bike_table`
--

CREATE TABLE `bike_table` (
  `bike_id` int(11) NOT NULL,
  `bike_name` text NOT NULL,
  `bike_type` text NOT NULL,
  `bike_price` float NOT NULL,
  `bike_owner` text NOT NULL,
  `bike_Ownerphone` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `bike_table`
--

INSERT INTO `bike_table` (`bike_id`, `bike_name`, `bike_type`, `bike_price`, `bike_owner`, `bike_Ownerphone`) VALUES
(1, 'SelfStudent1', 'Mountain Bike', 3, 'B031910259', '0135860815'),
(2, 'iNSolusi1', 'Sport', 2, 'iNsolusi', '013-iNsolusi');

-- --------------------------------------------------------

--
-- Table structure for table `reservation_table`
--

CREATE TABLE `reservation_table` (
  `reservation_id` int(255) NOT NULL,
  `bike_name` text NOT NULL,
  `reservation_1stDate` date NOT NULL,
  `reservation_2ndDate` date NOT NULL,
  `reservation_time` time NOT NULL,
  `reservation_day` int(11) NOT NULL,
  `reservation_price` float NOT NULL,
  `bike_owner` varchar(11) NOT NULL,
  `reservation_customer` text NOT NULL,
  `reservation_matrix` text NOT NULL,
  `user_phoneNumber` varchar(15) NOT NULL,
  `reservation_remark` longtext NOT NULL,
  `reservation_response` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `reservation_table`
--

INSERT INTO `reservation_table` (`reservation_id`, `bike_name`, `reservation_1stDate`, `reservation_2ndDate`, `reservation_time`, `reservation_day`, `reservation_price`, `bike_owner`, `reservation_customer`, `reservation_matrix`, `user_phoneNumber`, `reservation_remark`, `reservation_response`) VALUES
(20, 'SelfStudent1', '2020-04-02', '2020-04-02', '07:11:00', 0, 2.1, 'B031910259', 'Muhammad Fazlan Bin Kamaruddin', 'd031910259', '0231230123', '', 'Yes'),
(21, 'SelfStudent1', '2020-04-02', '2020-04-02', '13:11:00', 0, 2.1, 'B031910259', 'Muhammad Fazlan Bin Kamaruddin', 'd031910259', '0231230123', '', 'Yes');

-- --------------------------------------------------------

--
-- Table structure for table `user_table`
--

CREATE TABLE `user_table` (
  `id_user` int(255) NOT NULL,
  `user_matrix` varchar(10) NOT NULL,
  `user_password` text NOT NULL,
  `user_name` text NOT NULL,
  `user_email` text NOT NULL,
  `user_id` text NOT NULL,
  `user_passportId` text NOT NULL,
  `user_phoneNumber` varchar(15) NOT NULL,
  `user_dormitory` text NOT NULL,
  `user_faculty` text NOT NULL,
  `user_date_register` date NOT NULL,
  `user_role` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user_table`
--

INSERT INTO `user_table` (`id_user`, `user_matrix`, `user_password`, `user_name`, `user_email`, `user_id`, `user_passportId`, `user_phoneNumber`, `user_dormitory`, `user_faculty`, `user_date_register`, `user_role`) VALUES
(2, 'admin', 'admin123', 'administrator', '', '0', '', '0', '', '', '2020-03-30', 'administrator'),
(3, 'b031910259', '123456', 'Muhammad Fahmi Bin Kamaruddin', 'muhammadfahmi@gmail.com', '980121085685', 'None', '0135860815', 'Lestari', 'FTMK', '2020-03-31', 'administrator'),
(4, 'd031910259', '123456', 'Muhammad Fazlan Bin Kamaruddin', 'hakuto_deku@gmail.com', '000116085432', 'None', '0131230123', 'SATRIA', 'FACULTY OF INFORMATION AND COMMUNICATIONS TECHNOLOGY', '2020-04-04', 'Student'),
(5, 'r031910259', 'lolop123', 'testing bin testing', 'example@yahoo.com', 'f3120319', 'None', '0135860815', 'LESTARI', 'FACULTY OF INFORMATION AND COMMUNICATIONS TECHNOLOGY', '2020-04-11', 'Student');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `bike_table`
--
ALTER TABLE `bike_table`
  ADD PRIMARY KEY (`bike_id`);

--
-- Indexes for table `reservation_table`
--
ALTER TABLE `reservation_table`
  ADD PRIMARY KEY (`reservation_id`);

--
-- Indexes for table `user_table`
--
ALTER TABLE `user_table`
  ADD PRIMARY KEY (`id_user`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `bike_table`
--
ALTER TABLE `bike_table`
  MODIFY `bike_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
--
-- AUTO_INCREMENT for table `reservation_table`
--
ALTER TABLE `reservation_table`
  MODIFY `reservation_id` int(255) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=22;
--
-- AUTO_INCREMENT for table `user_table`
--
ALTER TABLE `user_table`
  MODIFY `id_user` int(255) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
