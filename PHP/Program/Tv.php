<?php
require_once "Produk.php";

class Tv extends Produk
{
    private int $UkuranLayar;
    private string $resolusi;
    private string $tipeLayar;

    // Konstruktor default
    public function __construct(int $id_produk = 0,string $merk = "",int $harga = 0,int $stok = 0, string $gambar = "",int $UkuranLayar = 0,string $resolusi = "", string $tipeLayar = "" ) {
        // Panggil konstruktor parent
        parent::__construct($id_produk, $merk, $harga, $stok, $gambar);
        $this->UkuranLayar = $UkuranLayar;
        $this->resolusi = $resolusi;
        $this->tipeLayar = $tipeLayar;
    }

    // Getter dan Setter
    public function getUkuranLayar(): int
    {
        return $this->UkuranLayar;
    }

    public function setUkuranLayar(int $UkuranLayar)
    {
        $this->UkuranLayar = $UkuranLayar;
    }

    public function getResolusi(): string
    {
        return $this->resolusi;
    }

    public function setResolusi(string $resolusi)
    {
        $this->resolusi = $resolusi;
    }

    public function getTipe(): string
    {
        return $this->tipeLayar;
    }

    public function setTipe(string $tipeLayar)
    {
        $this->tipeLayar = $tipeLayar;
    }
}
?>
