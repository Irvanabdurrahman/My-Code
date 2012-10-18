<!--Copyright (c) Irvan Abdurrahhman_21 Maret 2012

<?php
 //$server_host="localhost";
 $server_host="localhost";
 $user="root";
 $password="";
 
 //untuk koneksi dengan fungsi Mysql connect
 $koneksi = mysql_connect($server_host,$user,$password);
 if($koneksi==true)
  {
  echo "Selamat Koneksi ke Server Anda berhasil";
  echo "<br/>";
  
  //untuk membuat database dengan fungsi mysql_query
 $buatdatabase = mysql_query("create database databaseit");
 if($buatdatabase==true)
 {
 echo "Database databaseit telah sukses dibuat.";
 }
 else
 {
 echo "Database databaseit gagal dibuat";
 }
}
else
 {
 echo "Koneksi ke server gagal";
 //untuk menutup koneksi dengan fungsi mysql_close
 mysql_close($koneksi);
 }
?>
