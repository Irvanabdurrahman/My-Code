<?
$server_host="127.0.0.1";
$user="root";
$password="";
$hub = mysql_connect($server_host,$user,$password);
if ($hub==true)
	{
	echo "Selamat koneksi ke server And berhasil ";
	echo "<br/>";
	$query = "Show databases";
	if($oke = mysql_query($query))
		{
		echo "Sukses Menampilkan database.";
		echo "<br/>";
		echo "<b> DATABASE YANG ADA PADA SERVER : </b>";
		echo "<br/>";
		echo "<select size='1' name='data'>";
		while($tampil = mysql_fetch_array($oke)){ 
			echo "<option value=$tampil[0]> $tampil[0] </option>"; 
			}
		}else{
			echo "gagal Menampilkan Database.";
		}
		}else {
			echo "Koeneksi ke server gagal";
		}
			mysql_close($hub);
?>