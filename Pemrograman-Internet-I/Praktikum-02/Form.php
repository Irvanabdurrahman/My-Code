<html>
<title>Praktikum 2</title>
<body>

<h2>FORM GUESTBOOK</h2>
<form action="Hasil.php" method="Get">
<table width="300" border="1">
	<tr>
		<td width="87">Nama</td>
		<td width="180"><input type="text" name="nama"></td>
	</tr>
	<tr>
		<td>Alamat</td>
		<td><input type="text" name="alamat"></td>
	</tr>
	<tr>
		<td>Tanggal Lahir</td>
		<td><input type="text" name="tgl"></td>
	</tr>
	<tr>
		<td>Jenis Kelamin</td>
		<td><input type=radio name="kel" value=Laki-laki>L
		<input type=radio name="kel" value=Perempuan>P</td>
	</tr>
    <tr>
		<td>Asal Kota</td>
		<td><select name="kota">
		<option value="Jkt">Jakarta
		<option value="Trg"selected>Tangerang
		<option value="Dpk">Depok
		<option value="Bgr">Bogor
		<option value="Bks">Bekasi</td>
	</tr>
	<tr>
		<td>Komentar</td>
		<td><textarea name="Komen"></textarea></td>
	</tr>
    <tr>
		<td colspan="2"><input type=submit value="Kirim"></td>
	</tr>
</table>
</form>
</body>
</html>

