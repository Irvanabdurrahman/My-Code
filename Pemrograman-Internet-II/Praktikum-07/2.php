<?php
//Mengawali mencetak dengan PDF
require('fpdf/fpdf.php');//memanggil folder fpdf.php
$pdf=new FPDF('P','cm','A4');//membuat class PDF dengan format
$pdf->Open();//membuka PDF
$pdf->AddPage();//menambahkan halaman
$pdf->SetFont('Arial','BUI',12);//mengeset huruf bold underline dan italic
$pdf->Cell(0,2,'Header',1,2,'C',true);
$pdf->SetTextColor(100,190,190);//mengeset warna text
$pdf->Cell(0,2,'Mengawali menggunakan PDF.');//dengan 1 Cell -> koordinat x dan y, tulisan yang mau ditampilkan
$pdf->ln(0.5);//ganti baris dengan format spasi 0,5
$pdf->Cell(0,10,'Akhirnya Bisa Menggunakan PDF.');
$pdf->ln(1);
$pdf->Cell(0,2,'Untuk mengeset font, color text dan ganti baris.');
$pdf->ln();//default 2
$pdf->Cell(0,2,'Pasti Bisa..');
$pdf->Output();//mencetak ke pdf
?>