<?php
//memanggil file connect.php
include "connect.php";
mysql_select_db("databaseit",$koneksi);
//Menampilkan data yang ada dalam tabel
	$tampildata = mysql_query("select * from mahasiswa",
	$koneksi);
if($tampildata==true)
{
	echo "Sukses Menampilkan Data yang ada dala Tabel Mahasiswa";
	echo "<br/>";
	echo "<b> TABEL MAHASISWA Berisi : </b>";
	echo "<br/>";
$no=1;
//Untuk mengambil hasil query yang dilakukan oleh mysql_query
while($hasiltabel = mysql_fetch_array($tampildata))
{
//echo $no."".$hasiltabel['nim'.''.$hasiltabel['nama'].
//boleh menggunakan yang diatas atau yang dibawah -> hasilnya
echo $no." ".$hasiltabel[0]." ".$hasiltabel[1]. " ".$hasiltabel[2]. " " .$hasiltabel[3]. " ".$hasiltabel[4];
echo "<br/>";
$no++;
}
}
?>
