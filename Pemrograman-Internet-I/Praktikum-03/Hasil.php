<html>
	<h4>Selamat Datang, <?php echo$_POST['A']?> <a href="Proses.php">Keluar</a><br>
	anda telah memilih :</h4>
	<form method="post">
	<table>
		<tr>
			<td>Kota</td>
			<td>:</td>
			<td><?php echo$_POST['B']?></td>
		</tr>
		<tr>
			<td>Tanggal</td>
			<td>:</td>
			<td><?php echo$_POST['C']?> - <?php echo$_POST['D']?> - <?php echo$_POST['E']?></td>
		</tr>
		<tr>
			<td>Jam</td>
			<td>:</td>
			<td><?php echo$_POST['F']?> : <?php echo$_POST['G']?></td>
		</tr>
	</table>
	<h4>Terima Kasih.!!</h4>
	</form>
</html>