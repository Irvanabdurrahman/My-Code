<html>
	<h4>Halo , <?php echo$_POST['nama']?> <a href="Login.php">Keluar</a></h4>
	<h2>Soal IPS</h2>
	<p>Jawaban Anda :
	<form method="post" action="Pilih.php">
	<table>
		<tr>
			<td>1.
			<?php
				if($_POST['ips']=="d"){echo "a. sana";}
				else if($_POST['ips']=="e"){echo "b. sini";}
				else if($_POST['ips']=="f"){echo "c. situ";}
				?>
			</td>
		<tr>
			<td>2.
			<?php
				if($_POST['is']=="g"){echo "a. jkt";}
				else if($_POST['is']=="h"){echo "b. kl";}
				else if($_POST['is']=="i"){echo "c. ny";}
				?>
			</td>
		</tr>
		<tr>
<td colspan="2"><input type="button" value="Back" onClick="<?php echo"self.history.back()";?>"><input type="submit" value="Depan"></td>
		</tr>
	</table>
	</form>		
</html>