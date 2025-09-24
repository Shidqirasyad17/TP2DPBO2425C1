#include <iostream>
#include <string>
#include <vector>
#include "Tv.cpp"
using namespace std;

class SmartTv : public Tv
{

private:
    string SistemOperasi;
    string Internet;
    string Aplikasi;
    vector<SmartTv> Produk;

public:
    SmartTv()
    {
    }
    //constructor
    SmartTv(int id_produk, string merk, int harga, int stok, int UkuranLayar, string resolusi, string TipeLayar, string SistemOperasi, string Internet, string Aplikasi) : Tv(id_produk, merk, harga, stok, UkuranLayar, resolusi, TipeLayar)
    {
        this->SistemOperasi = SistemOperasi;
        this->Internet = Internet;
        this->Aplikasi = Aplikasi;
    }

    //getter & setter
    string getSistemOperasi()
    {
        return SistemOperasi;
    }

    void setSistemOperasi(string SistemOperasi)
    {
        this->SistemOperasi = SistemOperasi;
    }

    string getInternet()
    {
        return Internet;
    }

    void setInternet(string Internet)
    {
        this->Internet = Internet;
    }

    string getAplikasi()
    {
        return Aplikasi;
    }

    void setAplikasi(string Aplikasi)
    {
        this->Aplikasi = Aplikasi;
    }

    // Untuk menambahkan data baru 
    void addData(int id_produk, string merk, int harga, int stok, int UkuranLayar, string resolusi, string TipeLayar, string SistemOperasi, string Internet, string Aplikasi)
    {
        Produk.push_back(SmartTv(id_produk, merk, harga, stok, UkuranLayar, resolusi, TipeLayar, SistemOperasi, Internet, Aplikasi));
    }


    //untuk menampilkan data 
    void showData()
    {
        cout << "\nDaftar Smart TV:\n";
        if (Produk.empty()) //jika data produk kosong 
        {
            cout << "Data Not Found" << endl;
        
        }
        else
        {   
            //inisialisasi lebar minimum kolom
            int w_id = 2, w_merk = 4, w_harga = 5, w_stok = 4;
            int w_layar = 12, w_resolusi = 8, w_tipe = 10;
            int w_os = 14, w_internet = 8, w_aplikasi =8;


            // untuk mencari lebar kolom terpanjang
            for (int i = 0; i < Produk.size(); i++)
            {
                w_id = max(w_id, (int)to_string(Produk[i].getid_produk()).size());
                w_merk = max(w_merk, (int)Produk[i].getMerk().size());
                w_harga = max(w_harga, (int)to_string(Produk[i].getHarga()).size());
                w_stok = max(w_stok, (int)to_string(Produk[i].getStok()).size());
                w_layar = max(w_layar, (int)to_string(Produk[i].getUkuranLayar()).size());
                w_resolusi = max(w_resolusi, (int)Produk[i].getResolusi().size());
                w_tipe = max(w_tipe, (int)Produk[i].getTipe().size());
                w_os = max(w_os, (int)Produk[i].getSistemOperasi().size());
                w_internet = max(w_internet, (int)Produk[i].getInternet().size());
                w_aplikasi = max(w_aplikasi, (int)Produk[i].getAplikasi().size());
            }

            //untuk mencetak garis tabelnya
         auto garis = [&]() {
        cout << "+";
        for (int j = 0; j < w_id + 2; j++) cout << "-"; cout << "+";
        for (int j = 0; j < w_merk + 2; j++) cout << "-"; cout << "+";
        for (int j = 0; j < w_harga + 2; j++) cout << "-"; cout << "+";
        for (int j = 0; j < w_stok + 2; j++) cout << "-"; cout << "+";
        for (int j = 0; j < w_layar + 2; j++) cout << "-"; cout << "+";
        for (int j = 0; j < w_resolusi + 2; j++) cout << "-"; cout << "+";
        for (int j = 0; j < w_tipe + 2; j++) cout << "-"; cout << "+";
        for (int j = 0; j < w_os + 2; j++) cout << "-"; cout << "+";
        for (int j = 0; j < w_internet + 2; j++) cout << "-"; cout << "+";
        for (int j = 0; j < w_aplikasi + 2; j++) cout << "-"; cout << "+";
        cout << "\n";
    };
        
        //mencentak header tabel
        garis();
    cout << "| " << "ID" << string(w_id - 2 + 1, ' ')
         << "| " << "Merk" << string(w_merk - 4 + 1, ' ')
         << "| " << "Harga" << string(w_harga - 5 + 1, ' ')
         << "| " << "Stok" << string(w_stok - 4 + 1, ' ')
         << "| " << "Ukuran Layar" << string(w_layar - 12 + 1, ' ')
         << "| " << "Resolusi" << string(w_resolusi - 8 + 1, ' ')
         << "| " << "Tipe Layar" << string(w_tipe - 10 + 1, ' ')
         << "| " << "Sistem Operasi" << string(w_os - 14 + 1, ' ')
         << "| " << "Internet" << string(w_internet - 8 + 1, ' ')
         << "| " << "Aplikasi" << string(w_aplikasi - 8 + 1, ' ')
         << "|\n";
        garis();

        //mencetak isi tabel
            for (int i = 0; i < Produk.size(); i++) {
        cout << "| " << to_string(Produk[i].getid_produk())
             << string(w_id - to_string(Produk[i].getid_produk()).size() + 1, ' ')
             << "| " << Produk[i].getMerk()
             << string(w_merk - Produk[i].getMerk().size() + 1, ' ')
             << "| " << to_string(Produk[i].getHarga())
             << string(w_harga - to_string(Produk[i].getHarga()).size() + 1, ' ')
             << "| " << to_string(Produk[i].getStok())
             << string(w_stok - to_string(Produk[i].getStok()).size() + 1, ' ')
             << "| " << to_string(Produk[i].getUkuranLayar())
             << string(w_layar - to_string(Produk[i].getUkuranLayar()).size() + 1, ' ')
             << "| " << Produk[i].getResolusi()
             << string(w_resolusi - Produk[i].getResolusi().size() + 1, ' ')
             << "| " << Produk[i].getTipe()
             << string(w_tipe - Produk[i].getTipe().size() + 1, ' ')
             << "| " << Produk[i].getSistemOperasi()
             << string(w_os - Produk[i].getSistemOperasi().size() + 1, ' ')
             << "| " << Produk[i].getInternet()
             << string(w_internet - Produk[i].getInternet().size() + 1, ' ')
             << "| " << Produk[i].getAplikasi()
             << string(w_aplikasi - Produk[i].getAplikasi().size() + 1, ' ')
             << "|\n";
        garis();
            }
        }
            
     }
};
