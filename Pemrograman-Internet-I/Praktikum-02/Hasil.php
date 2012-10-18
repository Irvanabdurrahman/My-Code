<h2>Terima Kasih Atas Kunjungan Anda</h2>
<p>Nama : <?php echo $_GET['nama'];?></p>
<p>Alamat : <?php echo $_GET['alamat'];?></p>
<p>Tgl Lahir : <?php echo $_GET['tgl'];?></p>
<p>Jenis Kelamin : <?php echo $_GET['kel'];?></p>
<p>Asal Kota : 
<?php 
if ($_GET['kota']=="Jkt"){
echo "Jakarta";}
else if ($_GET['kota']=="Trg"){
echo "Tangerang";}
else if ($_GET['kota']=="Dpk"){
echo "Depok";}
else if ($_GET['kota']=="Bgr"){
echo "Bogor";}
else if ($_GET['kota']=="Bks"){
echo "Bekasi";}
?></p>
<p>Komentar : <?php echo $_GET['Komen'];?></p>
<h2>Sampai Jumpa Lagi!</h2>