<html>
	<h4>Selamat Datang, <?php echo$_POST['P']?> <a href="Pilih.php">Keluar</a><br>
	Yakin Memilih Tujuan<br>
	Berikut :</br>
	<form method="post" action="Hasil.php">
	<table>
		<tr>
			<td>Kota</td>
			<td>:</td>
			<td><?php
				if($_POST['kota']=="Surabaya"){echo "Surabaya";}
				else if($_POST['kota']=="Palembang"){echo "Palembang";}
				else if($_POST['kota']=="Jakarta"){echo "Jakarta";}
				else if($_POST['kota']=="Bandung"){echo "Bandung";}
				?>
			</td>
		</tr>
		<tr>
			<td>Tanggal</td>
			<td>:</td>
			<td><?php
				if($_POST['tgl']=="1"){echo "1";}
				else if($_POST['tgl']=="2"){echo "2";}else if($_POST['tgl']=="3"){echo "3";}else if($_POST['tgl']=="4"){echo "4";}
				else if($_POST['tgl']=="5"){echo "5";}else if($_POST['tgl']=="6"){echo "6";}else if($_POST['tgl']=="7"){echo "7";}
				else if($_POST['tgl']=="8"){echo "8";}else if($_POST['tgl']=="9"){echo "9";}else if($_POST['tgl']=="10"){echo "10";}
				else if($_POST['tgl']=="11"){echo "11";}else if($_POST['tgl']=="12"){echo "12";}else if($_POST['tgl']=="13"){echo "13";}
				else if($_POST['tgl']=="14"){echo "14";}else if($_POST['tgl']=="15"){echo "15";}else if($_POST['tgl']=="16"){echo "16";}
				else if($_POST['tgl']=="17"){echo "17";}else if($_POST['tgl']=="18"){echo "18";}else if($_POST['tgl']=="19"){echo "19";}
				else if($_POST['tgl']=="20"){echo "20";}else if($_POST['tgl']=="21"){echo "21";}else if($_POST['tgl']=="22"){echo "22";}
				else if($_POST['tgl']=="23"){echo "23";}else if($_POST['tgl']=="24"){echo "24";}else if($_POST['tgl']=="25"){echo "25";}
				else if($_POST['tgl']=="26"){echo "26";}else if($_POST['tgl']=="27"){echo "27";}else if($_POST['tgl']=="28"){echo "28";}
				else if($_POST['tgl']=="29"){echo "29";}else if($_POST['tgl']=="30"){echo "30";}else if($_POST['tgl']=="31"){echo "31";}
				?>
				-
			    <?php
				if($_POST['bln']=="Januari"){echo "Januari";}
				else if($_POST['bln']=="Februari"){echo "Februari";}else if($_POST['bln']=="Maret"){echo "Maret";}else if($_POST['bln']=="April"){echo "April";}
				else if($_POST['bln']=="Mei"){echo "Mei";}else if($_POST['bln']=="Juni"){echo "Juni";}else if($_POST['bln']=="Juli"){echo "Juli";}
				else if($_POST['bln']=="Agustus"){echo "Agustus";}else if($_POST['bln']=="September"){echo "September";}else if($_POST['bln']=="Oktober"){echo "Oktober";}
				else if($_POST['bln']=="November"){echo "November";}else if($_POST['bln']=="Desember"){echo "Desember";}
				?>
				-
				<?php
				if($_POST['thn']=="2000"){echo "2000";}
				else if($_POST['thn']=="2001"){echo "2001";}else if($_POST['thn']=="2002"){echo "2002";}else if($_POST['thn']=="2003"){echo "2003";}
				else if($_POST['thn']=="2004"){echo "2004";}else if($_POST['thn']=="2005"){echo "2005";}else if($_POST['thn']=="2006"){echo "2006";}
				else if($_POST['thn']=="2007"){echo "2007";}else if($_POST['thn']=="2008"){echo "2008";}else if($_POST['thn']=="2009"){echo "2009";}
				else if($_POST['thn']=="2010"){echo "2010";}else if($_POST['thn']=="2011"){echo "2011";}
				?>
			</td>
		</tr>
		<tr>
			<td>Jam</td>
			<td>:</td>
			<td><?php
				if($_POST['jam']=="01"){echo "01";}
				else if($_POST['jam']=="02"){echo "02";}else if($_POST['jam']=="03"){echo "03";}else if($_POST['jam']=="04"){echo "04";}
				else if($_POST['jam']=="05"){echo "05";}else if($_POST['jam']=="06"){echo "06";}else if($_POST['jam']=="07"){echo "07";}
				else if($_POST['jam']=="08"){echo "08";}else if($_POST['jam']=="09"){echo "09";}else if($_POST['jam']=="10"){echo "10";}
				else if($_POST['jam']=="11"){echo "11";}else if($_POST['jam']=="12"){echo "12";}
				?>
				:
				<?php
				if($_POST['menit']=="10"){echo "10";}
				else if($_POST['menit']=="20"){echo "20";}else if($_POST['menit']=="30"){echo "30";}else if($_POST['menit']=="40"){echo "40";}
				else if($_POST['menit']=="50"){echo "50";}else if($_POST['menit']=="60"){echo "60";}
				?>
		</tr>
		<tr>
			<td colspan="2"><input type="button" value="Kembali" onclick="<?php echo"self.history.back()";?>"></td>
			<td><input type="submit" value="Proses"></td>
		</tr>
	</table>
	<input type="hidden" name="A" value="<?php echo$_POST['P'];?>">
	<input type="hidden" name="B" value="<?php echo$_POST['kota'];?>">
	<input type="hidden" name="C" value="<?php echo$_POST['tgl'];?>">
	<input type="hidden" name="D" value="<?php echo$_POST['bln'];?>">
	<input type="hidden" name="E" value="<?php echo$_POST['thn'];?>">
	<input type="hidden" name="F" value="<?php echo$_POST['jam'];?>">
	<input type="hidden" name="G" value="<?php echo$_POST['menit'];?>">
	</form>
</html>