<?php
//memanggil file connect.php
include ("connect.php");
//memilih database yang akan ditampilkan tabelnya
mysql_select_db("databaseit",$koneksi);
//menampilkan tabel
$tampiltabel = mysql_query("show tables",$koneksi);
if($tampiltabel==true)
{
	echo "Sukses Menampilkan Database";
	echo "</br>";
	echo "<b>DATABASE YANG ADA PADA SERVER : </b>";
	echo "<br/>";
 while($hasil=mysql_fetch_array($tampiltabel))
  {
	echo "$hasil[0]";
	echo "<br/>";
  }
 }else{
  echo "gagal menampilkan tabel";
 }
 ?>