<html>
	<h4>Halo , <?php echo$_POST['nama']?> <a href="Login.php">Keluar</a></h4>
	<h2>Pilih Soal :</h2>
	<form method="post" action="Proses.php">
	<ul>
		<li><a href="IPA.php">IPA</a></li>
	</ul>
	<ul>
		<li><a href="IPS.php">IPS</a></li>
	</ul>
	<input type="hidden" name="P" value="<?php echo$_POST['nama'];?>">
	</form>		
</html>