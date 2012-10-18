<?php
//memanggil file connect.php
include "connect.php";
mysql_select_db("databaseit",$koneksi);
//hapus data dalam tabel
$hapus = mysql_query("DELETE from mahasiswa where nim='4510210001' ");
if($hapus==true)
 {
	echo"<br>data anda sudah di delete data";
 } 
else
 {
	echo "<br>Anda gagal delete data";
 }
?>