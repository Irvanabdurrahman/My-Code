<?php
//Menagawali mencetak dengan PDF
require ('fpdf/fpdf.php');//untuk memanggil folder fpdf.php
$pdf=new FPDF();//membuat class PDF
$pdf->Open();//membuka PDF
$pdf->AddPage();//menambahkan halaman
//mengeset huruf Bold Underline Italic
$pdf->SetFont('Arial','BUI',12);
//dengan 1 Cell -> koordinat x dan y, tulisan yang mau ditampilkan
$pdf->Cell(100,20,'Mengawali menggunakan PDF.');
$pdf->Cell(700,70,'Irvan Abdurrahman.');
$pdf->Output();//mencetak ke pdf
?>