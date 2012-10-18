<!--(c) Tuesday, April 10, 2012 by Irvan Abdurrahman!-->

<?
include "connect.php";
$nama=$_POST['nama'];
$pass=$_POST['pass'];


		if(empty($nama)& (empty($pass)))
        {
		echo "<script type='text/javascript'>
		eval(\"parent.location='login.php'\");
		</script>";
	   }
	  if(empty($nama))
	  {
		echo "<script type='text/javascript'>
		eval(\"parent.location='login.php'\");
		</script>";
	 }
	 if(empty($pass))
	 {
		echo "<script type='text/javascript'>
		eval(\"parent.location='login.php'\");
		</script>";
	 } 
	
		
		
if(isset($_SESSION['nama']))
{
   if($_SESSION['nama']== "Irvan")
   {
   $server_host="localhost";
	$user="root";
	$password="";
}
}

if($nama=='Irvan'){
echo "Anda Sudah Login sebagai ".$nama." dan Berhasil";
	}else{
		echo "Anda Sudah Login sebagai ".$nama." Jadi tidak Bisa Login";
	}
	
?>