<!--Program : Kalkulator Sederhana-->
<!--Pembuat : Irvan Abdurrahman_4510210003-->
<!--Update  : 07 Maret 2012-->

<html>
<?php
 $nilai1=$_POST['nilai1'];
 $nilai2=$_POST['nilai2'];
/* if($nilai1==''& $nilai2=='')
 {
	echo "<script type='text/javascript'>
	window.alert('Input Anda Masih Kosong');
	eval(\"parent.location='kalkulator.php'\");
	</script>";
	}
if($nilai1=='')
{
	echo "<script type='text/javascript'>
	window.alert('Anda Belum Memasukkan Nilai 1');
	eval(\"parent.location='kalkulator.php'\");
	</script>";
	}
if($nilai2=='')
{
	echo "<script type='text/javascript'>
	window.alert('Anda Belum Memasukkan Nilai 2');
	eval(\"parent.location='kalkulator.php'\");
	</script>";
	}*/
	
	
	if(empty($nilai1)& (empty($nilai2)))
        {
		echo "<script type='text/javascript'>
		window.alert('Input Anda Masih Kosong');
		eval(\"parent.location='kalkulator.php'\");
		</script>";
	}
	if(empty($nilai1))
	{
		echo "<script type='text/javascript'>
		window.alert('Anda Belum Memasukkan Nilai 1');
		eval(\"parent.location='kalkulator.php'\");
		</script>";
	}
	if(empty($nilai2))
	{
		echo "<script type='text/javascript'>
		window.alert('Anda Belum Memasukkan Nilai 2');
		eval(\"parent.location='kalkulator.php'\");
		</script>";
	 } 
	 
	 if((!is_numeric($nilai1))&(!is_numeric($nilai2)))
	{
		echo "<script type='text/javascript'>
		window.alert('Anda Harus Memasukkan Angka');
		eval(\"parent.location='kalkulator.php'\");
		</script>";
	}
	if(!is_numeric($nilai1))
	{
		echo "<script type='text/javascript'>
		window.alert('Nilai 1 Harus Angka');
		eval(\"parent.location='kalkulator.php'\");
		</script>";
	}
	if(!is_numeric($nilai2))
	{
		echo "<script type='text/javascript'>
		window.alert('Nilai 2 Harus Angka');
		eval(\"parent.location='kalkulator.php'\");
		</script>";
	}
	 
 $operator=$_POST['operator'];
 $hasil=proses($nilai1,$nilai2,$operator);
?>

<?php
function proses($nilai1,$nilai2,$operator){
  $hasil;
  if($operator=='+'){
    $hasil=$nilai1+$nilai2;
  }else if($operator=='-'){
    $hasil=$nilai1-$nilai2;
  }else if($operator=='*'){
    $hasil=$nilai1*$nilai2;
  }else if ($operator=='/'){
    $hasil=$nilai1/$nilai2;
  }else{
   echo "<script type='text/javascript'>
   window.alert('Anda Salah Memasukkan Operasi');
   eval(\"parent.location='kalkulator.php'\");</script>";
  }
   return $hasil;
 }
?>

<h4>Hasil Kalkulator Sederhana</h4>
 <form method="post">
 <table>
   <tr>
     <td>Nilai 1</td>
     <td>:</td>
     <td><?php echo$_POST['nilai1']?></td>
   </tr>
    <tr>
     <td>Nilai 2</td>
     <td>:</td>
     <td><?php echo$_POST['nilai2']?></td>
   </tr>
   <tr>
     <td>Operator</td>
     <td>:</td>
     <td><?php if ($_POST['operator']=="+"){
	echo "+";}
	else if ($_POST['operator']=="-"){
	echo "-";}
	else if ($_POST['operator']=="*"){
	echo "*";}
	else if ($_POST['operator']=="/"){
	echo "/";}
	?></td>
   </tr>
   <tr>
     <td>Hasil</td>
     <td>:</td>
     <td><?php echo $hasil ?></td>
   </tr>
 </table>


<h4><a href="kalkulator.php">Kembali</a></h4>
</html>