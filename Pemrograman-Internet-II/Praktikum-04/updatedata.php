<?php
//memanggil file connect.php
include "connect.php";
mysql_select_db("databaseit",$koneksi);
//update data dalam tabel
$ubah = mysql_query("UPDATE mahasiswa set nama='Selena' where nim='4510210001' ");
if($ubah==true)
 {
	echo"<br>data anda sudah diupdate dalam tabel mahasiswa";
 } 
else
 {
	echo "<br>Anda gagal update dalam tabel mahasiswa";
 }
?>