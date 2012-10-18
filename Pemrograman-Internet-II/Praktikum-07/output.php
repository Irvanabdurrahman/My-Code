<?php
/* (c) Irvan Abdurrahman | Rabu, 25 April 2012*/

$nilai1=$_POST['nilai1'];
$nilai2=$_POST['nilai2'];
$operator=$_POST['operator'];

if(empty($nilai1) & (empty($nilai2))){
	echo "<script type='text/javascript'>
			window.alert('Nilai Masih Kosong');
			eval(\"parent.location='kalkulator.php'\");</script>";
	}
if(empty($nilai1)){
		echo "<script type='text/javascript'>
		window.alert('Anda Belum Memasukkan Nilai 1');
		eval(\"parent.location='kalkulator.php'\");
		</script>";
	}
	if(empty($nilai2)){
		echo "<script type='text/javascript'>
		window.alert('Anda Belum Memasukkan Nilai 2');
		eval(\"parent.location='kalkulator.php'\");
		</script>";
	 } 
 
 $hasil=proses($nilai1,$nilai2,$operator);
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
   window.alert('Anda Belum Input Operasi');
   eval(\"parent.location='kalkulator.php'\");</script>";
  }
   return $hasil;
 }

require ('fpdf/fpdf.php');
$pdf=new FPDF();
$pdf->Open();
$pdf->AddPage();
$pdf->SetFont('Helvetica','',12);
$pdf->SetTextColor(255,255,255);
$pdf->cell(0,10,"Pemrograman Internet 2",1,1,'C',true);
$pdf->SetTextColor(0,0,0);
$pdf->ln(10); 
$pdf->Cell(10,10,"Nilai 1 : ".$nilai1." ");$pdf->ln(1); 
$pdf->Cell(5,20,"Nilai 2 : ".$nilai1." ");$pdf->ln(1); 
$pdf->Cell(10,30,"Hasil Dari ".$nilai1." ".$operator." ".$nilai2." adalah ".$hasil." ");$pdf->ln(30); 
$pdf->Cell(0,10,'Copyright 2012 by Irvan Abdurrahman',1,1,'C');
$pdf->Output();
?>