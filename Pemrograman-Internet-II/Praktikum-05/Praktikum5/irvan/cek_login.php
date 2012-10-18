<?php
include "connect.php";
$iduser=$_POST['iduser'];
$pas1=md5($_POST['pas1']);
$login=mysql_query ("SELECT * FROM user where namauser='$user' and password = '$pas1' ");
while($baris = mysql_fetch_array ($login)){
	if($baris[password] == $pas1){
		echo "Anda berhasil Login";
	}else{
		echo "gagal";
	}
   }
?>
