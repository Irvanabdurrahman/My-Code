<?php
//Program :Program Session
//Pembuat : Gregorius Hendita A.K,S.Si.,M.Cs
//Update : 29 September 2011 

//pendefinisian session start
session_start();

if(isset($_SESSION['login']))
{
   if($_SESSION['login']== "irvan")
   {
   echo " Anda Berhasil Login Sebagai irvan<br>";
   $server_host="localhost";
	$user="root";
	$password="";
	//untuk koneksi dengan fungsi mysql_connect
	include "connect.php";
	}
	else 
	{
		echo"Anda berhasil mendaftar dan Login dengan user ".$_SESSION['login']." bukan irvan <br>";
	}
	
	echo "Klik untuk <a href='logout1.php'>Logout</a>";
}
else if ($_SERVER['REQUEST_METHOD'] == 'POST')
{
	IF((!EMPTY($_POST['login'])) && (!empty($_POST['email'])))
	{
	//Fungsi htmlentetis untuk mengkonversi karakter-karakter tertentu dalam tag HTML
	$nama = htmlentities($_POST['login']);
	$email= htmlentities($_POST['email']);
	$_SESSION['login'] = $nama;
	echo"Terima kasih sudah mendaftar!<br/>",
	"login : $nama <br/>",
	"Email : $email <br/>";
	}
	else
	{
	echo"Tolong diisikan dengan benar username dan email! <br/>";
	}
}
else
{
?>
<form action="sesion1.php?login=overwritten" method="post">
<label for="login">Username:</label>
<input type="text" name="login"/>
<label for="email">Email:</label>
<input type="text" name="email"/>
<input type="submit" value="Register!"/>
</form>
<?php
}
?>

<a href="sesion1.php">sesion</a>



