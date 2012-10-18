<html>
<head>
<title>Form Pilih Tujuan</title>
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
<p>Selamat Datang ,<b> <?php echo $_REQUEST['nama']?> </b> | <a href="login.php" onClick="confirmasi()">Keluar</a></p><hr>
<p>Silahkan pilih tujuan anda :</p>
<form method="post" action="Proses.php">
	<input type="hidden" value="<?php echo $_REQUEST['pass']?>">
	<input type="hidden" name="user" value="<?php echo $_REQUEST['nama']?>">
	<table>
	<tr>
    <td>Kota</td>
    <td colspan="3"><select name="kota">
	<option value="bgr">Bogor</option>
	<option value="jkt">Jakarta</option>
	<option value="bdg">Bandung</option>
	</select></td>
  </tr>
  <tr>
    <td>Tanggal</td>
    <td><select name="tgl">
	<?php for($i=1; $i<31; $i++){
			echo "<option value=$i>$i</option>";}?>
	</select> -</td>
    <td><select name="bln">
		<option value="January" selected>January</option>
        <option value="February">February</option>
        <option value="Maret">Maret</option>
        <option value="April">April</option>
        <option value="Mei">Mei</option>
        <option value="Juni">Juni</option>
        <option value="Juli">Juli</option>
        <option value="Agustus">Agustus</option>
        <option value="September">September</option>
        <option value="Oktober">Oktober</option>
        <option value="November">November</option>
        <option value="Desember">desember</option>
	</select> -</td>
    <td><select name="thn">
		<option value="2011" selected>2011</option>
        <option value="2012">2012</option>
        <option value="2013">2013</option>
	</select></td>
  </tr>
  <tr>
    <td>Jam</td>
    <td><select name="jam"> 
		<option value="08">08</option>
		<option value="09">09</option>
        <option value="10">10</option>
        <option value="11">11</option>
        <option value="12">12</option>
        <option value="13">13</option>
        <option value="14">14</option>
        <option value="15">15</option>
        <option value="16">16</option>
        <option value="17">17</option>
        <option value="18">18</option>
	</select> :</td>
    <td colspan="2"><select name="menit"> 
		<option value="00">00</option>
		<option value="10">10</option>
		<option value="20">20</option>
		<option value="30">30</option>
	</select></td>
    </tr>
  <tr>
    <td colspan="4"><input type="submit" value="Pilih"></td>
  </tr>
	</table>
</form>	
</body>
</html>