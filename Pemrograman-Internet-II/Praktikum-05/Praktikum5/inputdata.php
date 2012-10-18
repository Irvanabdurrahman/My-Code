<!--Copyright (c) Irvan Abdurrahman_04 April 2012!-->

<html>
<body bgcolor="#FFFFAE">
<?php
$iduser=$_POST['iduser'];
$nama=$_POST['nama'];
$pas1=md5($_POST['pas1']);

include "connect.php";
mysql_select_db("databaseit",$koneksi);
$input = mysql_query("INSERT INTO user (iduser,namauser,password)
values ('$iduser','$nama','$pas1')");
if($input==true)
{
	echo"<br>Input data has been success";
}
else
{
	echo "<br>your data failed to input";
}
?>
</body>
</html>