<?php
//Program :Program Session
//Pembuat : Gregorius Hendita A.K,S.Si.,M.Cs
//Update : 29 September 2011 

	//Pendefinisian session start
	session_start();
	echo "Anda logout dengan user $_SESSION[login]";
	//Unset variabel yang disimpan di Session
	unset($_SESSION['login']);
?>
<html >
<head>
<title>Logged Out</title>
</head>
<body>
<h1>Logout </h1>
<p align="center">&nbsp;</p>
<h4 align="center">Anda Telah keluar.</h4>
<p align="center">Klik disini untuk melakukan <a href="sesion1.php">Login</a></p>
</body>
</html>
