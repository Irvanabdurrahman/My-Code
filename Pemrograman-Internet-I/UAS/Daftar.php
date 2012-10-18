<html>
	<form method="post" action="hasil_dft.php">
	<table>
		<tr>
			<td>Nama</td>
			<td>:</td>
			<td><input type="text" name="nama"></td>
		</tr>
		<tr>
			<td>SMU</td>
			<td>:</td>
			<td><select name="smu">
			<option value="1">SMUN 1 Surabaya</option>
			<option value="2" selected>SMUN 2 Palembang</option>
			<option value="3">SMUN 3 Jakarta</option>
			<option value="4">SMUN 4 Bandung</option>
			</select></td>
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
			<td colspan="2"><input type="button" value="Login" onClick="<?php echo"self.history.back()";?>"><input type="submit" value="Daftar"></td>
		</tr>
	</table>
	</form>
</html>