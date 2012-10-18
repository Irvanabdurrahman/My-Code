<?php
//memanggil file connect.php
include "connect.php";
//memilih database
mysql_select_db("databaseit",$koneksi);
//Memasukkan Data dalam tabel
$input1 = mysql_query("INSERT INTO mahasiswa (nim,nama,agama,tanggallahir,jeniskelamin)
values ('4510210003','Irvan','Islam','1992-05-19','pria')");
if($input1==true)
{
	echo"<br>Input1 anda sudah masuk dalam tabel mahasiswa";
}
else
{
	echo "<br>Anda gagal memasukkan input1 dalam tabel mahasiswa";
}

$input2 = mysql_query("INSERT INTO mahasiswa (nim,nama,agama,tanggallahir,jeniskelamin)
values ('4510210001','Maria','Islam','1990-02-18','Wanita')");
if($input2==true)
{
	echo"<br>Input2 anda sudah masuk dalam tabel mahasiswa";
}
else
{
	echo "<br>Anda gagal memasukkan input2 dalam tabel mahasiswa";
}
?>