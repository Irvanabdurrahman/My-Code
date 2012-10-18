<!--Copyright (c) Irvan Abdurrahman_04 April 2012!-->

<?php
	echo "<h2>Tambah User</h2>
		 <form method=POST action='tambah.php'>
		 <table>
		 <tr><td>ID User</td>
		 <td> : <input type=text name=iduser></td></tr>
		 <tr><td>Password</td>
		 <td> : <input type=password name=pas1></td></tr>
		 <tr><td>Konfirmasi Password</td>
		 <td> : <input type=password name=pas2>
		 </td></tr>
		 <tr><td>Nama Lengkap</td>
		 <td> : <input type=text name=nama</td></tr>
		 <tr><td colspan=2><input type=submit value=Simpan>
		 <input type=button value=Batal onclick=self.hitory.back()></td></tr>
		 </table>
		 </form>";
?>
		 