<?php
include "connect.php";
//perintah untuk menampilkan database
$sql = "show databases";
//meanmpilkan database
if($hasil=mysql_query($sql,$koneksi))
{
	echo "Sukses Menampilkan Database";
	echo "</br>";
	echo "<b>DATABASE YANG ADA PADA SERVER : </b>";
	echo "<select size='1' name='data'>";
//untuk mengambil hasil quey yang dilakukan oleh
//mysql_query() digunakan mysql_fetch_arry
 while($baris=mysql_fetch_array($hasil))
 {
	echo "<option value=$baris[0]> $baris[0]</option>";
 }
 echo"</select>";
 }
 else
  {
  echo "gagal menampilkan database";
  }
 ?>