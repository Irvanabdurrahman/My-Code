<!--Program : Kalkulator Sederhana-->
<!--Pembuat : Irvan Abdurrahman_4510210003-->
<!--Update  : 07 Maret 2012-->

<html>
<h4>Kalkulator Sederhana</h4>
  <form method="post" action="Hasil.php">
  <table>
    <tr>
      <td>Nilai 1</td>
      <td>:</td>
      <td><input type="text" name="nilai1"></td>
    </tr>
    <tr>
      <td>Nilai 2</td>
      <td>:</td>
      <td><input type="text" name="nilai2"></td>
    </tr>
    <tr>
      <td>Operasi</td>
      <td>:</td>
      <td><select name="operator">
	  <option value="">Silahkan Pilih</option>
      <option value="+">+ (Tambah)</option>
      <option value="-">- (Kurang)</option>
      <option value="*">* (Kali)</option>
      <option value="/">/ (Bagi)</option>
      </select></td>
    </tr>
    <tr>
      <td colspan="2"><input type="submit" value="Oke"><input type="reset" value="Batal"></td>
    </tr>
   </table>
</html>