<html>
<head>
<title>Form Daftar</title>
</head>

<body>
<form action="berhasil.php" method="POST">
<h1>Silakan isi form berikut : </h1>
<table>
  <tr>
    <td>Nama</td>
    <td>:</td>
    <td><input type="text" name="nama"></td>
  </tr>
  <tr>
    <td>Password 1 </td>
    <td>:</td>
    <td><input type="password" name="pass1"></td>
  </tr>
  <tr>
    <td>Password 2 </td>
    <td>:</td>
    <td><input type="password" name="pass2"></td>
  </tr>
  <tr>
    <td>Email</td>
    <td>:</td>
    <td><input type="text" name="email"></td>
  </tr>
  <tr>
    <td>Kota</td>
    <td>:</td>
    <td><select name="kota">
		<option value="dpk">Depok</option>
		<option value="jkt">Jakarta</option>
		<option value="bgr">Bogor</option>
	</select></td>
  </tr>
  <tr>
    <td>Jenis Kelamin </td>
    <td>:</td>
    <td><input type="radio" name="Kelamin" value="L">L <input type="radio" name="Kelamin" value="P">P</td>
  </tr>
  <tr>
    <td colspan="3"><input name="button" type="button" onClick="<?php echo "self.history.back()";?>" value="Kembali">
      <input name="submit" type="submit" value="Daftar"></td>
    </tr>
</table>
</form>
</body>
</html>
