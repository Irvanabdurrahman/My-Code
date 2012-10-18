<?php
	/* Latihan tabel*/

	echo "<h1 align=center>Daftar Hutang</h1>";
	echo "<table border=1 width=1000 cellpadding=10 cellspacing=0 align=center>";

	$no = 1;
	$nama = "Ade";
	$jml = 1000000;
	$tgl = "10 November 2009";
	//$bln = "November";
	//$thn = 2009;
	$total = $jml;
	
	echo "<tr align=center><th>No</th><th>Nama</th><th>Hutang</th><th>Jatuh Tempo</th></tr>";
	echo "<tr align=center><td>$no</td><td>$nama</td><td>$jml</td><td>$tgl $bln $thn</td></tr>";
	
	$no = 2;
	$nama = "Janis";
	$jml = 3000000;
	$tgl = "12 Agustus 2009";
	$total = $total + $jml;
	
	echo "<tr align=center><td>$no</td><td>$nama</td><td>$jml</td><td>$tgl</td></tr>";
	
	$no = 3;
	$nama = "Endang";
	$jml = 500000;
	$tgl = "29 Februari 2009";
	$total = $total + $jml;
	
	echo "<tr align=center><td>$no</td><td>$nama</td><td>$jml</td><td>$tgl</td></tr>";
	echo "<tr align=center><td>&nbsp</td><td>Total</td><td>$total</td><td>&nbsp</td></tr>";
?>
