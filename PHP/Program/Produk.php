<?php

class Produk{
    private int $id_produk;
    private string $merk;
    private int $harga;
    private int $stok;
    private string $gambar;

    public function __construct(int $id_produk, string $merk, int $harga, int $stok, string $gambar){
        $this->id_produk = $id_produk;
        $this->merk = $merk;
        $this->harga = $harga;
        $this->stok = $stok;
        $this->gambar = $gambar;
    }

    //getter idlaptop
    public function getid_produk(): int {
        return $this->id_produk;
    }

    //setter id_produk
    public function setid_produk(string $id_produk): void {
        $this->id_produk = $id_produk;
    }
    //getter merk
     public function getMerk(): string {
        return $this->merk;
    }
     //setter merk
    public function setMerk(string $merk): void {
        $this->merk = $merk;
    }
    //getter harga
    public function getHarga(): int {
        return $this->harga;
    }
     //setter harga
    public function setHarga(int $harga): void {
        $this->harga = $harga;
    }
    //getter stok
    public function getStok(): int {
        return $this->stok;
    }
     //setter stok
    public function setStok(int $stok): void {
        $this->stok = $stok;
    }
    //getter gambar
    public function getGambar(): string {
    return $this->gambar;
    }      
     //setter gambar
    public function setGambar(string $gambar): void {
    $this->gambar = $gambar;
    }
}

