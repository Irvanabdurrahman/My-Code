<?
define('FPDF FONTPATH','../Irvan/fpdf/fpdf/font/');
require('../Irvan/fpdf/fpdf.php');

class PDF extends FPDF{
function Header(){
		$this->Image('blink.jpg',1.1,1.05,2.9);//menampilkan gambar -> letak x, y dan ukuran gambar
		$this->SetFont('Arial','B',8);
		$this->Cell(19,2.3,'Created by Irvan Abdurrahman',1,0,'R');
		$this->Ln();
	}

function Footer(){
		$this->SetY(-1.5);
		$this->SetFont('Arial','I',8);
		$this->Cell(0,1,'Halaman '.$this->PageNo().'/{nb}',0,0,'C');

}
}

$pdf=new PDF('P','cm','A4');
$pdf->Open();
$pdf->AliasNbPages();//memberikan nilai nb -> jumlah halaman
$pdf->AddPage();
$pdf->SetFont('Arial','B',24);
$pdf->SetTextColor(10,10,10);
$pdf->SetFont('Arial','B',12);
$pdf->ln();
$pdf->MultiCell(0,1,'Menulis Berita',0,'C');
$pdf->SetTextColor(0,0,0);
$pdf->SetX(8.2);
$pdf->Write(1,'Oleh : ');
$pdf->SetFont('Arial','B',12);
$pdf->Write(1,'Irvan Abdurrahman','http://www.irvanabdurrahman.blogspot.com');
//menampilkan link ke alamat web
$pdf->SetFont('Arial','',12);
$pdf->Ln();
$text='Masalah utama dalam membuat program adalah malas untuk melakukan eksperimen';
$pdf->MultiCell(0,2,$text);

$link=$pdf->AddLink();//menambahkan link ke halaman Lain\
$pdf->SetTextColor(0,0,255);
$pdf->Write(1,'Ke Halaman 2 -> ',$link);

$pdf->SetTextColor(0,0,0);
$pdf->AddPage();
$pdf->SetLink($link);
$pdf->Ln();
$pdf->MultiCell(0,2,$text);
$pdf->MultiCell(0,2,$text);

$link=$pdf->AddLink();//Menambahkan link ke halaman Lain
$pdf->SetTextColor(0,0,255);
$pdf->Write(1,'Ke Halaman 3 -> ',$link);
$pdf->SetTextColor(0,0,0);
$pdf->AddPage();
$pdf->SetLink($link);
$pdf->Ln();
$text='Dalam sebuah program hal yang terpenting adalah logika';
$pdf->MultiCell(0,2,$text);
$pdf->Output();
?>