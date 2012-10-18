<!--Copyright (c) Irvan Abdurrahman_01 April 2012!-->

<html>
<body bgcolor="#FFFFAE">
<?php
 $server_host="127.0.0.1";
 $user="root";
 $password="";
 $koneksi = mysql_connect($server_host,$user,$password);
 if($koneksi==true)
  {
  echo "Congratulations..!! Server connection has been Success";
  echo "<br/>";
  }
 else
 {
 echo "Connection Server Failed";
mysql_close($koneksi);
 }
?>
</body>
</html>
