<html>
<head><title>Tabel</title>
</head>
<body>
<?php
/* Program 1.3 - Latihan*/
		
	echo "<h1 align=center>Tabel Kota dan Jumlah Penduduk</h1>";
	echo "<table width=1000 height=200 border=1 cellpadding=10 cellspacing=0 align=center >";
	
	$kota = "Jakarta";
	$jml = 7000000;
	$total = $jml;
	echo "<tr><th>Kota</th><th>Jml_Penduduk</th></tr>";
	echo "<tr align=center><td>$kota</td><td>$jml</td></tr>";
	
	$kota = "Bogor";
	$jml = 2000000;
	$total = $total + $jml;
	echo "<tr align=center><td>$kota</td><td>$jml</td>";
	
	$kota = "Bekasi";
	$jml = 1500000;
	$total = $total + $jml;
	
	echo "<tr align=center><td>$kota</td><td>$jml</td></tr>";
	echo "<tr align=center><td colspan=2>Total Jumlah Penduduk : $total</td></tr>";
	echo "</table>";
?>
</body>
</html>