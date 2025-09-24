<?php
require_once "SmartTv.php";


$st = new SmartTv();


$st->addData(1, "Polytron PLD 50UV8959", 4399000, 15, 50, "4K UHD", "LED", "Smart TV (Polytron)", "Tersedia", "Tersedia", "img/polytron.jpeg");
$st->addData(2, "LG OLED55C2PSA", 24198000, 8, 55, "4K UHD", "OLED", "webOS", "Tersedia", "Tersedia", "img/LG.jpeg");
$st->addData(3, "Sony Bravia KD-55X80L", 11999000, 10, 55, "4K UHD", "LED", "Google TV (Android)", "Tersedia", "Tersedia", "img/Sony.jpeg");
$st->addData(4, "Panasonic TH-55HX650G", 7200000, 12, 55, "4K UHD", "IPS LED", "My Home Screen", "Tersedia", "Tersedia", "img/panasoninc.jpg");
$st->addData(5, "Philips 55OLED706", 15500000, 6, 55, "4K UHD", "OLED", "Android TV", "Tersedia", "Tersedia", "img/philips.jpeg");

$produk = $st->getAll();
?>

<!DOCTYPE html>
<html>
<head>
    <title>TP2DPBO</title>
    <style>
        
        table { 
        border-collapse: collapse; 
        width: 100%; 
        background-color: #1e1e1e; 
    }
        th, td { border: 1px solid black; padding: 8px; text-align: center; }
        img { width: 100px; } 
        body {
        background-color: #121212; 
        color: #ffffff; 
        font-family: Arial, sans-serif;
    }
    </style>
</head>
<body>



<table>
    <tr>
        <th>ID</th>
        <th>Merk</th>
        <th>Harga</th>
        <th>Stok</th>
        <th>Ukuran Layar</th>
        <th>Resolusi</th>
        <th>Tipe Layar</th>
        <th>Sistem Operasi</th>
        <th>Internet</th>
        <th>Aplikasi</th>
        <th>Gambar</th> 
    </tr>

    <?php foreach ($produk as $tv): ?>
        <tr>
            <td><?php echo $tv->getid_produk(); ?></td>
            <td><?php echo $tv->getMerk(); ?></td>
            <td><?php echo number_format($tv->getHarga(), 0, ",", "."); ?></td>
            <td><?php echo $tv->getStok(); ?></td>
            <td><?php echo $tv->getUkuranLayar(); ?></td>
            <td><?php echo $tv->getResolusi(); ?></td>
            <td><?php echo $tv->getTipe(); ?></td>
            <td><?php echo $tv->getSistemOperasi(); ?></td>
            <td><?php echo $tv->getInternet(); ?></td>
            <td><?php echo $tv->getAplikasi(); ?></td>
          <td>
    <?php if ($tv->getGambar() != ""): ?>
        <img src="<?php echo $tv->getGambar(); ?>" alt="<?php echo $tv->getMerk(); ?>">
    <?php else: ?>
        Tidak ada
    <?php endif; ?>
</td>
        </tr>
    <?php endforeach; ?>

</table>

</body>
</html>
