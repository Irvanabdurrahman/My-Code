<?php
session_start();

include "connect.php";
$object=$_POST['object'];
$cari=$_POST['cari'];


mysql_select_db("databaseit",$koneksi);
$tampildata = mysql_query("select * from user",
	$koneksi);
	
	

if(isset($_SESSION['cari']))
{
   if($_SESSION['cari']== $iduser)
   {
    $server_host="localhost";
	$user="root";
	$password="";
	}
	else 
	{
		echo"Data ".$_SESSION['object']." yang Anda Cari ".$_SESSION['cari']." berhasil ditemukan 	dengan pemilik nama <br>";
	}
}
else if ($_SERVER['REQUEST_METHOD'] == 'POST')
{
	IF((!EMPTY($_POST['object'])) && (!empty($_POST['cari'])))
	{
	//Fungsi htmlentetis untuk mengkonversi karakter-karakter tertentu dalam tag HTML
	$nama = htmlentities($_POST['object']);
	$email= htmlentities($_POST['cari']);
	$_SESSION['cari'] = $cari;
	}
	else
	{
	echo"Tolong diisikan dengan benar username dan email! <br/>";
	}
}
?>