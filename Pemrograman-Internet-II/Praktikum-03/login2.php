<?php
include "connect.php";

$nama=$_POST['nama'];
$password=$_POST['password'];
if($nama=="root"&&$password=="root")
{
$buatdatabase = mysql_query("Create database databaseit");
if($buatdatabase ==true)
 {
 echo "Database databaseit success ";
 }
 else
 {
 echo "Database databaseit failed bacause database has created";
 }
}
else
{
echo"Karena bukan root anda tidak berhasil";
}
?>
