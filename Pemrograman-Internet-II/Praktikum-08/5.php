<?php
/*(c) Wednesday, May 01, 2012 by Irvan Abdurrahman!*/

//Mengawali mencetak dengan PDF
require('../Irvan/fpdf/fpdf.php');//memanggil folder fpdf.php
$pdf=new FPDF('P','cm','A4');//membuat class PDF dengan format
$pdf->Open();//membuka PDF
$pdf->AddPage();//menambahkan halaman
$pdf->SetFont('Arial','BUI',12);//mengeset huruf bold underline dan italic
$pdf->SetTextColor(100,190,190);//mengeset warna text
$pdf->setX(3);//Mengeset nilai awal x
$pdf->setY(3);
$pdf->Cell(0,2,'Mengawali menggunakan PDF.',0,0,'C');
//koordinat untuk center
$pdf->ln(0.5);//ganti baris dengan format spasi 0.5 
$pdf->cell(0,2,'Irvan',0,0,'L');
$pdf->ln(1); 
$pdf->Cell(0,2,'Parker.',0,0,'R');
$pdf->ln(); 
$pdf->Cell(0,2,'Pasti Bisa..',0,0,'J');
$pdf->Output();//mencetak ke pdf
?>