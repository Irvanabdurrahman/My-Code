<html>
	<h3>Anda Telah Terdaftar dengan Data :</h3>
	<form method="post">
	<table>
		<tr>
			<td>Nama</td>
			<td>:</td>
			<td><?php echo$_POST['nama']?></td>
		</tr>
		<tr>
			<td>Password</td>
			<td>:</td>
			<td><?php echo$_POST['pass1']?></td>
		</tr>
		<tr>
			<td>Confirm Password</td>
			<td>:</td>
			<td><?php echo$_POST['pass2']?></td>
		</tr>
		<tr>
			<td>Email</td>
			<td>:</td>
			<td><?php echo$_POST['email']?></td>
		</tr>
		<tr>
			<td>Kota</td>
			<td>:</td>
			<td><?php
				if($_POST['kota']=="Sby"){echo "Surabaya";}
				else if($_POST['kota']=="Plg"){echo "Palembang";}
				else if($_POST['kota']=="Jkt"){echo "Jakarta";}
				else if($_POST['kota']=="Bdg"){echo "Bandung";}
				?>
			</td>
		</tr>
		<tr>
			<td>Jenis Kelamin</td>
			<td>:</td>
			<td><?php
				if($_POST['kelamin']=="Laki-Laki"){echo "Laki-Laki";}
				else if($_POST['kelamin']=="Perempuan"){echo "Perempuan";}
				?>
			</td>
		</tr>
</table>
<h4>Klik <a href="Login.php">disini</a> untuk Login</h4>
</form>
</html>