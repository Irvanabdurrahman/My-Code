<html>
<head>
<title>Cek Tujuan</title>
<script type="text/javascript">
function confirmasi(){
if (confirm("Apakah anda ingin keluar ?"))
		location="login.php";
	else
		location="tujuan.php?nama=<?php echo $_REQUEST['nama']; ?>";
}
</script>
</head>
<body>
<form action="cek.php" method="POST">
<p>Selamat Datang ,<b> <?php echo $_REQUEST['user'];?> </b> | <a href="login.php" onClick="confirmasi()">Keluar</a></p><hr>
<input type="hidden" name="namina" value="<?php echo $_REQUEST['user'];?>">
<table>
<tr>
	<td colspan="3"><p>Yakin anda memilih tujuan berikut :</p></td>
</tr>
<tr>
	<td>Kota</td>
	<td>:</td>
	<td><?php if($_REQUEST['kota']=="bgr"){
				echo "Bogor";
			  }else if($_REQUEST['kota']=="jkt"){
				echo "Jakarta";
			  }else if($_REQUEST['kota']=="bdg"){
				echo "Bandung";
			  }else
			  	echo "Tidak ada pilihan"; ?>
		<input type="hidden" name="city" value="<?php 
			  if($_REQUEST['kota']=="bgr"){
				echo "Bogor";
			  }else if($_REQUEST['kota']=="jkt"){
				echo "Jakarta";
			  }else if($_REQUEST['kota']=="bdg"){
				echo "Bandung";
			  }else
			  	echo "Tidak ada pilihan"; ?>">			
	</td>
</tr>
<tr>
	<td>Tanggal</td>
	<td>:</td>
	<td><?php echo $_REQUEST['tgl'] . " - " . $_REQUEST['bln'] . " - " . $_REQUEST['thn'];?>
		<input type="hidden" name="d" value="<?php echo $_REQUEST['tgl'];?>">
		<input type="hidden" name="m" value="<?php echo $_REQUEST['bln'];?>">
		<input type="hidden" name="y" value="<?php echo $_REQUEST['thn'];?>">
	</td>
</tr>
<tr>
	<td>Pukul</td>
	<td>:</td>
	<td><?php echo $_REQUEST['jam'] . " : " . $_REQUEST['menit'];?>
		<input type="hidden" name="h" value="<?php echo $_REQUEST['jam'];?>">
		<input type="hidden" name="mt" value="<?php echo $_REQUEST['menit'];?>">
	</td>
</tr>
<tr>
  <td colspan="2"><input type="button" value="Kembali" onClick="<?php echo "self.history.back()";?>"> 
  				  <input type="submit" value="Proses"></td> 
</tr>
</table>
</form>
</body>
</html>
