#include <iostream>
#include <string>
#include "Produk.cpp"
using namespace std;

class Tv : public Produk
{

private:
    int UkuranLayar;
    string resolusi;
    string tipeLayar;

public:
    Tv()
    {
    }
    //constructor
    Tv(int id_produk, string merk, int harga, int stok, int UkuranLayar, string resolusi, string tipeLayar) : Produk(id_produk, merk, harga, stok)
    {

        this->UkuranLayar = UkuranLayar;
        this->resolusi = resolusi;
        this->tipeLayar = tipeLayar;
    }

    //getter dan setter
    int getUkuranLayar()
    {
        return UkuranLayar;
    }

    void setUkuranLayar(int UkuranLayar)
    {
        this->UkuranLayar = UkuranLayar;
    }

    string getResolusi()
    {
        return resolusi;
    }

    void setResolusi(string resolusi)
    {
        this->resolusi = resolusi;
    }

    string getTipe()
    {
        return tipeLayar;
    }

    void setTipe(string tipeLayar)
    {
        this->tipeLayar = tipeLayar;
    }
};