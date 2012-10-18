<html>
	<h4>Halo , <?php echo$_POST['P']?> <a href="Login.php">Keluar</a></h4>
	<h2>Soal IPA</h2>
	<form method="post" action="jwb_IPA.php">
	<table>
		<tr>
			<td>1. X adalah..</td></tr>
		<tr>
		<td> <input type=radio name="ipa" value=a>a. 2<br>
				<input type=radio name="ipa" value=b>b. 3<br>
				<input type=radio name="ipa" value=c>c. 8<br>
		</tr>
		<tr>
			<td>2. Y adalah..</td></tr>
		<tr><td> <input type=radio name="ip" value=x>a. 1x<br>
				<input type=radio name="ip" value=y>b. 5x<br>
				<input type=radio name="ip" value=z>c. 8x<br>
		</tr>
		</tr>
		<tr>
<td colspan="2"><input type="button" value="Back" onClick="<?php echo"self.history.back()";?>"><input type="submit" value="Next"></td>
		</tr>
	</table>
	</form>		
</html>