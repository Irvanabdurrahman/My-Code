<?
/*(c) Wednesday, May 09, 2012 by Irvan Abdurrahman*/

define ('FPDF FONTPATH' ,'fpdf/fpdf/font/');
require ('fpdf/fpdf.php');

class PDF extends FPDF{
function Header(){
		$this->SetFont('helvetica','B',14);
		$this->SetTextColor(84,162,6);
		$this->SetDrawColor(238,228,49);
		$this->SetFillColor(193,249,248);
		$this->SetX(2);
		$this->MultiCell(17,2.2,'Universitas Pancasila','LTRB', 'C',true);
		$this->Image('Images/logo.jpg',2.1,1.1,2.2,2,'jpg','http://www.irvanabdurrahman.blogspot.com');
		$this->Ln(0.2);
	}
	
	function Footer(){
			$this->SetY(-1);
			$this->SetFont('helvetica','B',8);
			$this->SetTextColor(0,0,0);
			$this->Cell(0,1,'Page '.$this->PageNo().'/{nb}',0,0,'C');
	}
}

$pdf=new PDF('P','cm','A4');
$pdf->Open();
$pdf->AliasNbPages();
$pdf->AddPage();

$pdf->SetAutoPageBreak(true,0);
$pdf->SetFont('helvetica','B',24);
$pdf->SetTextColor(0,0,0);

$pdf->SetFont('helvetica','',12);
$pdf->SetTextColor(0,0,0);
$pdf->SetX(7);
$pdf->Write(1,'Created by ');
$pdf->Write(1,'Irvan Abdurrahman','http://www.irvanabdurrahman.blogspot.com');$pdf->ln(1.7);
$link=$pdf->AddLink();
$pdf->SetLink($link);
$text='Berikut ini Adalah Profil data diri : ';
$pdf->SetX(3);
$pdf->MultiCell(0,0.5,$text);

$teks='Kembali ke halaman utama';

$pdf->SetFont('helvetica','',10);
$link1=$pdf->AddLink();
$pdf->SetX(5);
$pdf->Write(1,'1. Tom Delonge',$link1);

$link2=$pdf->AddLink();
$pdf->SetX(5);
$pdf->Write(2,'2. Mark Hoppus',$link2);

$link3=$pdf->AddLink();
$pdf->SetX(5);
$pdf->Write(3,'3. Travis Barker',$link3);

$link4=$pdf->AddLink();
$pdf->SetX(5);
$pdf->Write(4,'4. Chester Bennington',$link4);

$link5=$pdf->AddLink();
$pdf->SetX(5);
$pdf->Write(5,'5. Mike Shinoda',$link5);

$pdf->SetTextColor(0,0,0);
$pdf->AddPage();
$pdf->SetLink($link1);
$pdf->SetFont('helvetica','',8);
$pdf->SetTextColor(106,99,49);
$pdf->Cell(15,3,'Nama : Tom Delonge',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16.7,3,'Tanggal Lahir : 13 Desember 1975',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16.9,3,'Kewarganegaraan : Amerika Serikat',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(14.6,3,'Pekerjaan : Musisi',0,0,'C');
$pdf->Image('Images/tom.jpeg',4,4,2.5,3,'jpeg','http://www.irvanabdurrahman.blogspot.com');
$pdf->SetTextColor(7,14,252);
$pdf->SetX(8);
$pdf->Write(5,$teks,$link);

$pdf->SetTextColor(0,0,0);
$pdf->AddPage();
$pdf->SetLink($link2);
$pdf->SetFont('helvetica','',8);
$pdf->SetTextColor(106,99,49);
$pdf->Cell(15,3,'Nama : Mark Hoppus',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16.1,3,'Tanggal Lahir : 15 Maret 1972',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16.9,3,'Kewarganegaraan : Amerika Serikat',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(14.6,3,'Pekerjaan : Musisi',0,0,'C');
$pdf->Image('Images/mark.jpeg',4,4,2.5,3,'jpeg','http://www.irvanabdurrahman.blogspot.com');
$pdf->SetTextColor(7,14,252);
$pdf->SetX(8);
$pdf->Write(5,$teks,$link);

$pdf->SetTextColor(0,0,0);
$pdf->AddPage();
$pdf->SetLink($link3);
$pdf->SetFont('helvetica','',8);
$pdf->SetTextColor(106,99,49);
$pdf->Cell(15,3,'Nama : Travis Barker',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16.7,3,'Tanggal Lahir : 14 November 1975',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16.9,3,'Kewarganegaraan : Amerika Serikat',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(14.6,3,'Pekerjaan : Musisi',0,0,'C');
$pdf->Image('Images/travis.jpeg',4,4,2.5,3,'jpeg','http://www.irvanabdurrahman.blogspot.com');
$pdf->SetTextColor(7,14,252);
$pdf->SetX(8);
$pdf->Write(5,$teks,$link);

$pdf->SetTextColor(0,0,0);
$pdf->AddPage();
$pdf->SetLink($link4);
$pdf->SetFont('helvetica','',8);
$pdf->SetTextColor(106,99,49);
$pdf->Cell(15.7,3,'Nama : Chester Bennington',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16,3,'Tanggal Lahir : 20 Maret 1976',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16.8,3,'Kewarganegaraan : Amerika Serikat',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(14.6,3,'Pekerjaan : Musisi',0,0,'C');
$pdf->Image('Images/chester.jpg',4,4,2.5,3,'jpg','http://www.irvanabdurrahman.blogspot.com');
$pdf->SetTextColor(7,14,252);
$pdf->SetX(8);
$pdf->Write(5,$teks,$link);

$pdf->SetTextColor(0,0,0);
$pdf->AddPage();
$pdf->SetLink($link5);
$pdf->SetFont('helvetica','',8);
$pdf->SetTextColor(106,99,49);
$pdf->Cell(15,3,'Nama : Mike Shinoda',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16.4,3,'Tanggal Lahir : 11 Februari 1977',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(16.8,3,'Kewarganegaraan : Amerika Serikat',0,0,'C');$pdf->ln(0.5);
$pdf->Cell(14.6,3,'Pekerjaan : Musisi',0,0,'C');
$pdf->Image('Images/max.jpg',4,4,2.5,3,'jpg','http://www.irvanabdurrahman.blogspot.com');
$pdf->SetTextColor(7,14,252);
$pdf->SetX(8);
$pdf->Write(5,$teks,$link);

$pdf->Output();
?>