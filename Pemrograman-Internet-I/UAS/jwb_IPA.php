<html>
	<h4>Halo , <?php echo$_POST['nama']?> <a href="Login.php">Keluar</a></h4>
	<h2>Soal IPA</h2>
	<p>Jawaban Anda :
	<form method="post" action="Pilih.php">
	<table>
		<tr>
			<td>1.
			<?php
				if($_POST['ipa']=="a"){echo "a. 2";}
				else if($_POST['ipa']=="b"){echo "b. 3";}
				else if($_POST['ipa']=="c"){echo "c. 8";}
				?>
			</td>
		<tr>
			<td>2.
			<?php
				if($_POST['ip']=="x"){echo "a. 1x";}
				else if($_POST['ip']=="y"){echo "b. 5x";}
				else if($_POST['ip']=="z"){echo "c. 8x";}
				?>
			</td>
		</tr>
		<tr>
<td colspan="2"><input type="button" value="Back" onClick="<?php echo"self.history.back()";?>"><input type="submit" value="Depan"></td>
		</tr>
	</table>
	</form>		
</html>