<?php
	/* Array 1 Dimensi*/
	
	$arr = array (0 => array ("nama" => "Eko", "NIM" => 001),
				  1 => array ("nama" => "Budi", "NIM" => 002));
	echo "<table border=1 width=500 align=center cellpadding=10 cellspacing=0>";
	echo "<h1 align=center>Tabel Array 1 Dimensi</h1>";
	echo "<tr><th>NIM</th><th>Nama</th></tr>";
	for ($i=0;$i<count($arr);$i++){
		echo "<tr align=center>";
		echo "<td>".$arr[$i]["NIM"]."</td>";
		echo "<td>".$arr[$i]["nama"]."</td>";
		echo "</tr>";
	}
	echo "</tabel>";
?>