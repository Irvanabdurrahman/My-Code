<!--Copyright (c) Irvan Abdurrahman_04 April 2012!-->

<?php
include "connect.php";
mysql_select_db("databaseit",$koneksi);
if ($_POST[pas1] != $_POST[pas2])
{
	echo "<script type='text/javascript'>
			windows.alert('Password Anda Tidak Sama');
			eval(\"parent.location='tambah_user.php'\");
			</script>";
}
else{
$iduser=$_POST['iduser'];
$nama=$_POST['nama'];
$pas1=md5($_POST['pas1']);
$input=mysql_query ("INSERT INTO user(iduser,namauser,password) values ('$iduser','$nama','$pas1')");
if($input==true)
	{
		echo "<br>Data Anda Berhasil Dimasukkan";
	}
	else
	{
		echo "<br>Anda Gagal Memasukkan data";
	}
}
?>