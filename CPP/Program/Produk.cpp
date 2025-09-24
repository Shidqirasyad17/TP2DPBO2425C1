#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Produk
{
private:
    int id_produk;
    string merk;
    int harga;
    int stok;

public:
    Produk()
    {
    }
    //constructor
    Produk(int id_produk, string merk, int harga, int stok)
    {
        this->id_produk = id_produk;
        this->merk = merk;
        this->harga = harga;
        this->stok = stok;
    }
    
    //getter dan setter
    int getid_produk()
    {
        return id_produk;
    }

    string getMerk()
    {
        return merk;
    }

    void setMerk(string merk)
    {
        this->merk = merk;
    }

    int getHarga()
    {
        return harga;
    }

    void setHarga(int harga)
    {
        this->harga = harga;
    }

    int getStok()
    {
        return stok;
    }

    void setStok(int stok)
    {
        this->stok = stok;
    }
};