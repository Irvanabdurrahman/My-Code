<!--Copyright (c) Irvan Abdurrahman_04 April 2012!-->

<html><title>tableuser</title>
<?php
	include "connect.php";
	mysql_select_db("databaseit",$koneksi);
	$tampildata = mysql_query("select * from user",
	$koneksi);?>
	
<font size="+2" color="#999999"<b><p align="center">TABEL USER</p></b></font><hr>
<table border="1" align="center">
 <tr bgcolor="#999999">
 	<th>No</th>
 	<th>iduser</th>
	<th>Nama User</th>
	<th>Password</th>
 </tr>
 <tr align="center">
		<td><?php
		$no=1;
		while($hasiltabel = mysql_fetch_array($tampildata))
		{
		echo $no."  " ;?></td>
		<td><?php echo $hasiltabel[0]. "  " ;?></td>
		<td><?php echo $hasiltabel[1]. "  " ;?></td>
		<td><?php echo $hasiltabel[2]. "  " ;?></td>
	</tr>
	<tr align="center">
		<td><?php 
		$no++;
		}
		?></td>
	</tr>
</table>
</html>