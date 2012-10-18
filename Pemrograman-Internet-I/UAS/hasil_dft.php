<html>
	<h4>Sukses Terdaftar :</h4>
	<form method="post">
	<table>
		<tr>
			<td>Nama</td>
			<td>:</td>
			<td><?php echo$_POST['nama']?></td>
		</tr>
		<tr>
			<td>SMU</td>
			<td>:</td>
			<td><?php
				if($_POST['smu']=="1"){echo "SMUN 1 Surabaya";}
				else if($_POST['smu']=="2"){echo "SMUN 2 Palembang";}
				else if($_POST['smu']=="3"){echo "SMUN 3 Jakarta";}
				else if($_POST['smu']=="4"){echo "SMUN 4 Bandung";}
				?>
			</td>
		</tr>
	</table>
	<h4><a href="Login.php">Masuk</a></h4>
	</form>
</html>