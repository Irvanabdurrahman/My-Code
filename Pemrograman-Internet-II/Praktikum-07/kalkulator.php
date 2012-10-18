<!--(c) Rabu April 25, 2012 by Irvan Abdurrahman!-->

<?php
echo "<style>
			h2,td {font-family:Tahoma;color:#FFFF53;}
			#top {margin-left:350;margin-right:350;height:300px;background-color:RGBA(0,0,0,.5);-moz-border-radius:20px;-webkit-border-radius:20px;}
			body{background:url(image/bg.jpg)center right;margin-top:150;
			</style><div id=top><body><br><br><h2 align=center>Kalkulator Sederhana</h2><hr width=500px>
			<form method=post action=output.php>
			<table align=center>
				<tr><td>Nilai 1</td><td> : <input type=text name=nilai1></td></tr>
				<tr><td>Nilai 2</td><td> : <input type=text name=nilai2></td></tr>
				<tr><td>Operasi</td><td> : <select name=operator>
								<option value=>Silahkan Pilih</option>
								<option value=+>+ (Tambah)</option>
								<option value=->- (Kurang)</option>
								<option value=*>* (Kali)</option>
								<option value=/>/ (Bagi)</option>
								</select></td></tr>
				<tr><td colspan=2><input type=submit value=Oke><input type=reset value=Batal></td></tr></table>
				</form></body></div>";
?>