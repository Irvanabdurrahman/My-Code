<html>
<head>
<title>Biodata anda</title>
</head>

<body>
<p>Anda telah terdaftar dengan data :</p>
<table>
  <tr>
    <td>Nama</td>
    <td>:</td>
    <td><?php echo $_REQUEST['nama'];?></td>
  </tr>
  <tr>
    <td>Password</td>
    <td>:</td>
    <td><?php echo $_REQUEST['pass1'];?></td>
  </tr>
  <tr>
    <td>Email</td>
    <td>:</td>
    <td><?php echo $_REQUEST['email'];?></td>
  </tr>
  <tr>
    <td>Kota</td>
    <td>:</td>
    <td><?php  if($_REQUEST['kota']=="dpk"){
				echo "Depok";
			  }else if($_REQUEST['kota']=="jkt"){
				echo "Jakarta";
			  }else if($_REQUEST['kota']=="bgr"){
				echo "Bogor";
			  }else
			  	echo "Tidak ada pilihan"; ?></td>
  </tr>
  <tr>
    <td>Jenis Kelamin </td>
    <td>:</td>
    <td><?php if($_REQUEST['Kelamin']=="L"){
				echo "Laki-Laki";
			  }else if($_REQUEST['Kelamin']=="P"){
				echo "Perempuan";
			  }else
			  	echo "Tidak Ada"; ?></td>
  </tr>
</table>
<p>Klik <a href="login.php">disini</a> untuk login kembali</p>
</body>
</html>
