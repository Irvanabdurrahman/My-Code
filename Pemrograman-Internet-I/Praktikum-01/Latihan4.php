<?php
	/* Array 2 Dimensi*/
 
	$arr = array (0 => array ("no" => 1, "nama" => "Ade", "hutang" => 1000000, "tempo" => "10 November 2009"),
				  1 => array ("no" => 2, "nama" => "Janis", "hutang" => 3000000, "tempo" => "12 Agustus 2009"),
			      2 => array ("no" => 3, "nama" => "Endang", "hutang" => 500000, "tempo" => "29 Februari 2009"),
			      3 => array ("no" => 4, "nama" => "Dita", "hutang" => 4500000, "tempo" => "31 September 2009"),
			      4 => array ("no" => 5, "nama" => "Eni", "hutang" => 1000000, "tempo" => "1 Desember 2009"));
			 
	echo "<table border=1 width=1000 cellpadding=10 cellspacing=0 align=center>";
	echo "<h1 align=center>Tabel Array 2 Dimensi</h1>";
	echo "<tr><th>No</th><th>Nama</th><th>Hutang</th><th>Jatuh Tempo</th></tr>"; 
	for($x=0;$x<5;$x++){
		for($y=0;$y<1;$y++){
			echo "<tr align=center>";
			echo "<td>".$arr[$x]["no"]."</td>";
			echo "<td>".$arr[$x]["nama"]."</td>";
			echo "<td>".$arr[$x]["hutang"]."</td>";
			echo "<td>".$arr[$x]["tempo"]."</td>";
			echo "</tr>";
		}
	} 
	echo "</table>";
?>			 