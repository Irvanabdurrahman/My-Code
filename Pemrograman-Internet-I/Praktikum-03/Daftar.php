<html>
	<h4>Silahkan Isi Form Berikut :</h4>
	<form method="post" action="Tampil.php">
	<table>
		<tr>
			<td>Nama</td>
			<td>:</td>
			<td><input type="text" name="nama"></td>
		</tr>
		<tr>
			<td>Password</td>
			<td>:</td>
			<td><input type="password" name="pass1"></td>
		</tr>
		<tr>
			<td>Confirm Password</td>
			<td>:</td>
			<td><input type="password" name="pass2"></td>
		</tr>
		<tr>
			<td>Email</td>
			<td>:</td>
			<td><input type="text" name="email"></td>
		</tr>
		<tr>
			<td>Kota</td>
			<td>:</td>
			<td><select name="kota">
			<option value="Sby">Surabaya</option>
			<option value="Plg" selected>Palembang</option>
			<option value="Jkt">Jakarta</option>
			<option value="Bdg">Bandung</option>
			</select></td>
		</tr>
		<tr>
			<td>Jenis Kelamin</td>
			<td>:</td>
			<td><input type="radio" name="kelamin" value=Laki-Laki>L
			<input type="radio" name="kelamin" value=Perempuan>P</td>
		</tr>
		<tr>
			<td colspan="2"><input type="button" value="Kembali" onclick="<?php echo"self.history.back()";?>"><input type="submit" value="Daftar"></td>
		</tr>
	</table>
	</form>
</html>