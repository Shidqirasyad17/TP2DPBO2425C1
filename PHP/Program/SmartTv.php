<?php
require_once "Tv.php";

class SmartTv extends Tv
{
    private string $SistemOperasi;
    private string $Internet;
    private string $Aplikasi;
    public array $Produk = [];

    //constructor
    public function __construct(int $id_produk = 0, string $merk = "", int $harga = 0, int $stok = 0, int $UkuranLayar = 0, string $resolusi = "", string $TipeLayar = "", string $SistemOperasi = "", string $Internet = "", string $Aplikasi = "",string $gambar = "")
    {
        parent::__construct($id_produk, $merk, $harga, $stok, $gambar, $UkuranLayar, $resolusi, $TipeLayar);
        $this->SistemOperasi = $SistemOperasi;
        $this->Internet = $Internet;
        $this->Aplikasi = $Aplikasi;
    }

    //getter & setter
    public function getSistemOperasi(): string { 
    return $this->SistemOperasi; }
    public function setSistemOperasi(string $SistemOperasi) { 
    $this->SistemOperasi = $SistemOperasi; }

    public function getInternet(): string {
    return $this->Internet; }
    public function setInternet(string $Internet) { 
    $this->Internet = $Internet; }

    public function getAplikasi(): string {
    return $this->Aplikasi; }
    public function setAplikasi(string $Aplikasi) {
    $this->Aplikasi = $Aplikasi; }

// untuk menambahkan data 
   public function addData(int $id_produk, string $merk, int $harga, int $stok, int $UkuranLayar, string $resolusi, string $TipeLayar, string $SistemOperasi, string $Internet, string $Aplikasi, string $gambar = "")
    {
        $this->Produk[] = new SmartTv($id_produk, $merk, $harga, $stok, $UkuranLayar,
                                  $resolusi, $TipeLayar, $SistemOperasi, $Internet, $Aplikasi, $gambar);
    }

    // untuk mengambil semua data dan disimpan di array produk
    public function getAll(): array
    {
        return $this->Produk;
    }
}
?>
