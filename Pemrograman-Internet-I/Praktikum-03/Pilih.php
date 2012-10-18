<html>
	<h4>Selamat Datang , <?php echo$_POST['nama']?> <a href="Login.php">Keluar</a></h4>
	<h2>Silahkan pilih</h2>
	<form method="post" action="Proses.php">
	<table>
		<tr>
			<td>Tujuan</td>
			<td>:</td>
		</tr>
		<tr>
			<td>Kota</td>
			<td>:</td>
			<td><select name="kota">
			<option value="Surabaya">Surabaya</option>
			<option value="Palembang" selected>Palembang</option>
			<option value="Jakarta">Jakarta</option>
			<option value="Bandung">Bandung</option>
			</select></td>
		</tr>
		<tr>
			<td>Tanggal</td>
			<td>:</td>
			<td><select name="tgl">
			<option value="1" selected>1</option>
            <option value="2">2</option>
            <option value="3">3</option>
            <option value="4">4</option>
            <option value="5">5</option>
            <option value="6">6</option>
            <option value="7">7</option>
            <option value="8">8</option>
            <option value="9">9</option>
            <option value="10">10</option>
            <option value="11">11</option>
            <option value="12">12</option>
            <option value="13">13</option>
            <option value="14">14</option>
            <option value="15">15</option>
            <option value="16">16</option>
            <option value="17">17</option>
            <option value="18">18</option>
            <option value="19">19</option>
            <option value="20">20</option>
            <option value="21">21</option>
            <option value="22">22</option>
            <option value="23">23</option>
            <option value="24">24</option>
            <option value="25">25</option>
            <option value="26">26</option>
            <option value="27">27</option>
            <option value="28">28</option>
            <option value="29">29</option>
            <option value="30">30</option>
            <option value="31">31</option>
            </select>
			-
			<select name="bln">
            <option value="Januari">Januari</option>
            <option value="Februari">Februari</option>
            <option value="Maret">Maret</option>
            <option value="April">April</option>
            <option value="Mei">Mei</option>
            <option value="Juni">Juni</option>
            <option value="Juli">Juli</option>
            <option value="Agustus">Agustus</option>
            <option value="September">September</option>
            <option value="Oktober">Oktober</option>
            <option value="November">November</option>
            <option value="Desember"selected>Desember</option>
            </select>
			-
			<select name="thn">
            <option value="2000">2000</option>
            <option value="2001">2001</option>
            <option value="2002">2002</option>
            <option value="2003">2003</option>
            <option value="2004">2004</option>
            <option value="2005">2005</option>
            <option value="2006">2006</option>
            <option value="2007">2007</option>
            <option value="2008">2008</option>
            <option value="2009">2009</option>
            <option value="2010">2010</option>
            <option value="2011" selected>2011</option>
            </select>
			</td>
		</tr>
		<tr>
			<td>Jam</td>
			<td>:</td>
			<td><select name="jam">
			<option value="01">01</option>
			<option value="02">02</option>
			<option value="03">03</option>
			<option value="04">04</option>
			<option value="05">05</option>
			<option value="06">06</option>
			<option value="07">07</option>
			<option value="08" selected>08</option>
			<option value="09">09</option>
			<option value="10">10</option>
			<option value="11">11</option>
			<option value="12">12</option>
			</select>
			:
			<select name="menit">
			<option value="10">10</option>
			<option value="20">20</option>
			<option value="30" selected>30</option>
			<option value="40">40</option>
			<option value="50">50</option>
			</select>
			</td>
		</tr>
		<tr>
			<td colspan="3"><input type="submit" value="Pilih"></td>
		</tr>
	</table>
	<input name="P" value="<?php echo$_POST['nama']?>" type="hidden">
	</form>		
</html>