<?php
 echo "<body bgcolor=#FFFFAE>
       <form method=POST action=caridata.php>
 	   <table>
 	   <h3>FORM PENCARIAN</h3><hr>
 	   <tr><td>Pencarian Berdasarkan</td><td> : <select name=object>
	   <option value=Nim>Nim</option><option value=Nama>Nama</option><option value=Agama>Agama			       </option></select>
	   </td></tr>
	   <tr><td>Kata Kunci </td><td> : <input type=text name=cari></td></tr>
	   <tr><td colspan=2><input type=submit value=Cari><input type=reset value=Batal></td></tr>
	   </table></form></body>";
?>
