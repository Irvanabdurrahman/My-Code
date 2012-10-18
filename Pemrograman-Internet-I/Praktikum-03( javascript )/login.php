<html>
<head>
<title>Form Login</title>
<script>
function cek(){
var  nama = "Febry";
var Pass = 123;
if(var nama == "Febry" && parseInt(Pass) == 123)
	open("tujuan.php?nama=<?php echo $_REQUEST['nama']; ?>");
else
	alert("Password Salah");
}
</script>
</head>
<body>
 <h1>TRAVEL ONLINE</h1>
 <h3>Silakan login :</h3>
 <form method="POST" action="tujuan.php">
 <table>
 <tr>
	<td>Nama</td>
	<td><input type="text" name="nama"></td>
 </tr>
 <tr>
	<td>Password</td>
	<td><input type="password" name="Pass"></td>
 </tr>
 <tr>
	<td colspan="2"><input type="submit" value="Login"></td>
 </tr>
 </table>
 <p>Atau <a href="daftar.php">Daftar</a></p>
 </form>
</body>
</html>