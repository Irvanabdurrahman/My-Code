<?php
//Mengawali mencetak dengan PDF
require('fpdf/fpdf.php');//memanggil folder fpdf.php
$pdf=new FPDF('P','cm','A4');//membuat class PDF dengan format
$pdf->Open();//membuka PDF
$pdf->AddPage();//menambahkan halaman
$pdf->SetFont('Arial','BUI',12);//mengeset huruf bold underline dan italic
$pdf->SetTextColor(100,190,190);//mengeset warna text
//mencetak dengan perulangan
$pdf->Cell(0,2,'Mencetak dengan perulangan PDF.');
$pdf->ln(1);
$pdf->SetFont('Arial','B',12);//mengeset huruf bold underline dan italic
$pdf->SetTextColor(0,0,0);//mengeset warna text

/*$output='Prof. DR Irvan Abdurrahman. S.T., M.Kom';
for($a=0;$a<5;$a++)
	{
	$pdf->Cell(0,2,$output);//dengan 1 Cell -> koordinat x dan y, tulisan yang mau ditampilkan
	$pdf->ln(0.5);//ganti baris dengan format spasi 0.5
	}*/

for($a=0;$a<5;$a++)
	{
	$pdf->Cell(0,2,'Prof. DR Irvan Abdurrahman. S.T., M.Kom');//dengan 1 Cell -> koordinat x dan y, tulisan yang mau ditampilkan
	$pdf->ln(0.5);//ganti baris dengan format spasi 0.5
	}
$pdf->Output();//mencetak ke pdf
?>