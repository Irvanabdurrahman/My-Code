<?
/*(c) Wednesday, May 09, 2012 by Irvan Abdurrahman!*/

//Mengawali mencetak dengan PDF
require('../Irvan/fpdf/fpdf.php');//memanggil folder fpdf.php
$pdf=new FPDF('P','cm','A4');//membuat class PDF dengan format halaman potrait
$pdf->Open();//membuka PDF
$pdf->AddPage();//menambahkan halaman
$pdf->Image('blink.jpg',2,4,2,2,'jpg','www.yahoo.com');
$pdf->SetMargins(2, 3, 4);//Mengeset Margin
$pdf->SetAutoPageBreak(true,0);//Mengeset batas bawah halaman
$pdf->SetFont('helvetica','B',24);//mengeset huruf bold Underline Italic
$pdf->SetTextColor(250,50,50);//Mengeset warna text
$pdf->SetDrawColor(0,255,255);//mengeset warna border text
$pdf->SetFillColor(166,251,153);//Mengeset Warna isi kotak
$pdf->MultiCell(17,2, 'Menulis Berita' ,'LTRB', 'C',true);//Multicell->koordinat x dan y
//Koordionat untuk membuat center
$pdf->SetFont('Times','',12);//Mengeset hruf bold Underline italic
$pdf->SetTextColor(0,0,0);$pdf->Ln(0.5);
$text='Masalah utama dalam Membuat program adalah malasnya seseorang untuk mencoba sdfgsfdssf';
$pdf->MultiCell(0,0.5,$text);//memanggil variabel text
$pdf->Ln();
$text='Dalam Sebuah program ';
$pdf->MultiCell(0,0.5,$text);
$pdf->Ln();
$pdf->PageNo();
$pdf->Output();
?>