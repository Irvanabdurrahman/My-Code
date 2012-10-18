<!--Copyright (c) Irvan Abdurrahman_21 Maret 2012

<?php
include "connect.php";

//untuk membuat database dengan fungsi mysql_query
$buatdatabase = mysql_query("Create database databaseit");
if($buatdatabase == true)
 {
 echo "Database databaseit success ";
 }
 else
 {
 echo "Database databaseit failed bacause database has created";
 }
?>