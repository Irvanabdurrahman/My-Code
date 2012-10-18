<?php
//memanggil file connect.php
include("connect.php");
$buatdatabase = mysql_query("create database databaseit");
	if ($buatdatabase == true)
	{
		echo "Database databaseit telah sukses dibuat.";
		//memilih database
		mysql_select_db ("databaseit", $koneksi);
		//membuat tabel
		$tabel = "CREATE TABLE mahasiswa
		(
			nim varchar (10) not null,
			PRIMARY KEY (nim),
			nama varchar (30) not null,
			agama varchar (15)not null,
			tanggallahir date,
			jeniskelamin varchar (10) not null
		)";
		//mengeksekusi tabel yang dibuat
		$buat_tabel = mysql_query($tabel, $koneksi);
		if ($buat_tabel)
		{
			echo "<br><b>Tabel mahasiswa sudah terbuat <b><br>";
		}
		else{
			echo "<br> Tabel Mahasiswa gagal dibuat <br>";
		}
	}
		else{
			"Databaseit gagal dibuat karena sudah ada di server";
		}
?>