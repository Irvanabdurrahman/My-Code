<html>
<head>
<title>Hasil</title>
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
<p>Selamat Datang ,<b> <?php echo $_REQUEST['namina'];?> </b> | <a href="login.php" onClick="confirmasi()">Keluar</a></p><hr>
<table>
  <tr>
    <td colspan="3">Anda telah memilih : </td>
  </tr>
  <tr>
    <td>Kota</td>
    <td>:</td>
    <td><?php echo $_REQUEST['city'];?></td>
  </tr>
  <tr>
    <td>Tanggal</td>
    <td>:</td>
    <td><?php echo $_REQUEST['d'] . " - " . $_REQUEST['m'] . " - " . $_REQUEST['y'];?></td>
  </tr>
  <tr>
    <td>Jam</td>
    <td>:</td>
    <td><?php echo $_REQUEST['h'] . " : " . $_REQUEST['mt']?></td>
  </tr>
</table>
<h3>Terima Kasih</h3>
</body>
</html>
