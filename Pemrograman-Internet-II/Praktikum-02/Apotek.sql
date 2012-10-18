-- phpMyAdmin SQL Dump
-- version 2.11.7
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Mar 24, 2012 at 10:50 PM
-- Server version: 5.0.51
-- PHP Version: 5.2.6

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `apotek`
--

-- --------------------------------------------------------

--
-- Table structure for table `faktur_penjualan`
--

CREATE TABLE IF NOT EXISTS `faktur_penjualan` (
  `No_Penjualan` int(11) NOT NULL auto_increment,
  `Tanggal_Penjualan` text,
  `id_Pelanggan` int(11) default NULL,
  `id_Karyawan` int(11) default NULL,
  `id_Obat` int(11) default NULL,
  `Jumlah_Penjualan` int(11) default NULL,
  `Total_Penjualan` int(11) default NULL,
  `Pajak_Penjualan` int(11) default NULL,
  `Total_Bayar` int(11) default NULL,
  PRIMARY KEY  (`No_Penjualan`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=7 ;

--
-- Dumping data for table `faktur_penjualan`
--

INSERT INTO `faktur_penjualan` (`No_Penjualan`, `Tanggal_Penjualan`, `id_Pelanggan`, `id_Karyawan`, `id_Obat`, `Jumlah_Penjualan`, `Total_Penjualan`, `Pajak_Penjualan`, `Total_Bayar`) VALUES
(1, '12 Februari 2012', 1, 1, 1, 20, 40, 10000, 100000),
(2, '1 Maret 2012', 2, 2, 2, 70, 100, 500000, 3000000),
(3, '10 Maret 2012', 3, 3, 3, 60, 150, 700000, 4000000),
(4, '8 Januari 2012', 2, 3, 1, 100, 150, 200000, 1000000),
(5, '17 Februari 2012', 1, 2, 2, 180, 170, 250000, 1500000),
(6, '3 Maret 2012', 3, 3, 1, 190, 185, 350000, 2000000);

-- --------------------------------------------------------

--
-- Table structure for table `faktur_supply`
--

CREATE TABLE IF NOT EXISTS `faktur_supply` (
  `No_Supply` int(11) NOT NULL auto_increment,
  `Tgl_Supply` text,
  `id_Karyawan` int(11) default NULL,
  `id_Supplier` int(11) default NULL,
  `id_Obat` int(11) default NULL,
  `Jumlah_Obat` int(11) default NULL,
  `Total_Supply` int(11) default NULL,
  `Pajak_Supply` int(11) default NULL,
  `Total_Bayar` int(11) default NULL,
  PRIMARY KEY  (`No_Supply`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=10 ;

--
-- Dumping data for table `faktur_supply`
--

INSERT INTO `faktur_supply` (`No_Supply`, `Tgl_Supply`, `id_Karyawan`, `id_Supplier`, `id_Obat`, `Jumlah_Obat`, `Total_Supply`, `Pajak_Supply`, `Total_Bayar`) VALUES
(1, '2 Januari 2012', 1, 1, 1, 30, 50, 10000, 200000),
(2, '13 Desember 2011', 2, 2, 2, 100, 200, 300000, 1000000),
(3, '25 Januari 2012', 3, 3, 3, 150, 250, 350000, 1500000),
(4, '23 Desember 2011', 3, 2, 1, 150, 250, 350000, 1500000),
(5, '7 Januari 2012', 1, 2, 3, 200, 300, 400000, 2000000),
(6, '15 Maret 2012', 2, 3, 1, 140, 340, 260000, 3400000);

-- --------------------------------------------------------

--
-- Table structure for table `karyawan`
--

CREATE TABLE IF NOT EXISTS `karyawan` (
  `id_Karyawan` int(11) NOT NULL auto_increment,
  `Nama_Karyawan` varchar(15) default NULL,
  `Alamat_Karyawan` varchar(15) default NULL,
  `Kota_Karyawan` varchar(15) default NULL,
  `Status_Karyawan` varchar(15) default NULL,
  `No_Telp_Karyawan` int(11) default NULL,
  PRIMARY KEY  (`id_Karyawan`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

--
-- Dumping data for table `karyawan`
--

INSERT INTO `karyawan` (`id_Karyawan`, `Nama_Karyawan`, `Alamat_Karyawan`, `Kota_Karyawan`, `Status_Karyawan`, `No_Telp_Karyawan`) VALUES
(1, 'Budi', 'Kalibata', 'Jakarta', 'Kawin', 98827732),
(2, 'Edi', 'Kebayoran', 'Jakarta', 'Belum Kawin', 9776332),
(3, 'Harry', 'Cililitan', 'Jakarta', 'Kawin', 36656222);

-- --------------------------------------------------------

--
-- Table structure for table `obat`
--

CREATE TABLE IF NOT EXISTS `obat` (
  `id_Obat` int(11) NOT NULL auto_increment,
  `Nama_Obat` varchar(15) default NULL,
  `Jenis_Obat` varchar(15) default NULL,
  `Harga_Obat` varchar(15) default NULL,
  `Stock_Obat` varchar(15) default NULL,
  `id_Supplier` int(11) default NULL,
  PRIMARY KEY  (`id_Obat`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

--
-- Dumping data for table `obat`
--

INSERT INTO `obat` (`id_Obat`, `Nama_Obat`, `Jenis_Obat`, `Harga_Obat`, `Stock_Obat`, `id_Supplier`) VALUES
(1, 'Panadol', 'Tablet', '3000', '50', 1),
(2, 'Inza', 'Tablet', '5000', '100', 2),
(3, 'Paramex', 'Tablet', '3000', '60', 3);

-- --------------------------------------------------------

--
-- Table structure for table `pelanggan`
--

CREATE TABLE IF NOT EXISTS `pelanggan` (
  `id_Pelanggan` int(11) NOT NULL auto_increment,
  `Nama_Pelanggan` text,
  `Alamat_Pelanggan` varchar(15) default NULL,
  `Jenis_Kelamin` varchar(15) default NULL,
  `Pekerjaan_Pelanggan` text,
  PRIMARY KEY  (`id_Pelanggan`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

--
-- Dumping data for table `pelanggan`
--

INSERT INTO `pelanggan` (`id_Pelanggan`, `Nama_Pelanggan`, `Alamat_Pelanggan`, `Jenis_Kelamin`, `Pekerjaan_Pelanggan`) VALUES
(1, 'Roy', 'Bekasi', 'Pria', 'Dosen'),
(2, 'Yeni', 'Tangerang', 'Wanita', 'Pengusaha'),
(3, 'Peter', 'Bogor', 'Pria', 'Wiraswasta');

-- --------------------------------------------------------

--
-- Table structure for table `supplier`
--

CREATE TABLE IF NOT EXISTS `supplier` (
  `id_Supplier` int(11) NOT NULL auto_increment,
  `Nama_Supplier` varchar(15) default NULL,
  `Alamat_Supplier` varchar(15) default NULL,
  `Kota_Suplier` varchar(15) default NULL,
  `No_Telp_Supplier` int(11) default NULL,
  PRIMARY KEY  (`id_Supplier`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

--
-- Dumping data for table `supplier`
--

INSERT INTO `supplier` (`id_Supplier`, `Nama_Supplier`, `Alamat_Supplier`, `Kota_Suplier`, `No_Telp_Supplier`) VALUES
(1, 'Konimex', 'Kuningan', 'Jakarta', 2889333),
(2, 'Kimia Farma', 'Pamulang', 'Tangerang', 86752222),
(3, 'Indo Farma', 'Tambun', 'Bekasi', 5342272);
