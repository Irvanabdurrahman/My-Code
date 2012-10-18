<html>
	<h4>Halo , <?php echo$_POST['nama']?> <a href="Login.php">Keluar</a></h4>
	<h2>Soal IPS</h2>
	<form method="post" action="jwb_IPS.php">
	<table>
		<tr>
			<td>1. X ada di..</td></tr>
		<tr>
		<td> <input type=radio name="ips" value=d>a. sana<br>
				<input type=radio name="ips" value=e>b. sini<br>
				<input type=radio name="ips" value=f>c. situ<br>
		</tr>
		<tr>
			<td>2. Ibukota Y adalah..</td></tr>
		<tr><td> <input type=radio name="is" value=g>a. jkt<br>
				<input type=radio name="is" value=h>b. kl<br>
				<input type=radio name="is" value=i>c. ny<br>
		</tr>
		</tr>
		<tr>
<td colspan="2"><input type="button" value="Back" onClick="<?php echo"self.history.back()";?>"><input type="submit" value="Next"></td>
		</tr>
	</table>
	</form>		
</html>