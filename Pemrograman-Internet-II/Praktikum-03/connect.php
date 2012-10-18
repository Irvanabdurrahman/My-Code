<!--Copyright (c) Irvan Abdurrahman_21 Maret 2012!-->

<?php
 //$server_host="localhost";
 $server_host="127.0.0.1";
 $user="root";
 $password="";
 
 //untuk koneksi dengan fungsi Mysql connect
 $koneksi = mysql_connect($server_host,$user,$password);
 if($koneksi==true)
  {
  echo "Selamat Koneksi ke Server Anda berhasil";
  echo "<br/>";
  }
 else
 {
 echo "Koneksi ke server gagal";
  //untuk menutup koneksi dengan fungsi mysql close
mysql_close($koneksi);
 }
?>
