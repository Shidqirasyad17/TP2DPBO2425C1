#include <iostream>
#include <string>
#include "SmartTv.cpp"
using namespace std;

int main()
{
    SmartTv St;
    int pilih;

St.addData(1, "Polytron PLD 50UV8959", 4399000, 15, 50, "4K UHD", "LED", "Smart TV (Polytron)", "Tersedia", "Tersedia");
St.addData(2, "LG OLED55C2PSA", 24198000, 8, 55, "4K UHD", "OLED", "webOS", "Tersedia", "Tersedia");
St.addData(3, "Sony Bravia KD-55X80L", 11999000, 10, 55, "4K UHD", "LED", "Google TV (Android)", "Tersedia", "Tersedia");
St.addData(4, "Panasonic TH-55HX650G", 7200000, 12, 55, "4K UHD", "IPS LED", "My Home Screen", "Tersedia", "Tersedia");
St.addData(5, "Philips 55OLED706", 15500000, 6, 55, "4K UHD", "OLED", "Android TV", "Tersedia", "Tersedia");

    St.showData();

    do
    {
        cout << "\n|===== MENU SmartTv =====|\n";
        cout << "|  1. Tambah SmartTv     |\n";
        cout << "|  2. Tampilkan Data     |\n";
        cout << "|  0. exit               |\n";
        cout << "|========================|\n";

        cout << "Pilih Menu : ";

        cin >> pilih;

        if (pilih == 1)
        {
            cout << "Masukan Data Data yang ingin ditambahkan!\n";
            int id_produk, harga, stok, UkuranLayar;
            string merk, TipeLayar, SistemOperasi,resolusi, Internet, Aplikasi;
             cout << "ID PRODUK : ";
            cin >> id_produk;
            cin.ignore();
            cout << "Merk : ";
            getline(cin, merk);
            cout << "Harga : ";
            cin >> harga;
            cin.ignore();
            cout << "Stok : ";
            cin >> stok;
            cin.ignore();
            cout << "Ukuran Layar : ";
            cin >> UkuranLayar;
            cin.ignore();
            cout << "Resolusi : ";
            getline(cin, resolusi);
            cout << "Tipe Layar : ";
            getline(cin, TipeLayar);
            cout << "Sistem Operasi : ";
            getline(cin, SistemOperasi);
            cout << "Internet : ";
            getline(cin, Internet);
            cout << "Aplikasi : ";
            getline(cin, Aplikasi);

            St.addData(id_produk, merk, harga, stok, UkuranLayar, resolusi, TipeLayar, SistemOperasi, Internet, Aplikasi);
        }
        else if (pilih == 0)
        {
            cout << "Selamat Tinggal!";
        }
        else if (pilih == 2)
        {
            St.showData();
        }
        else
        {
            cout << "Pilihan tidak ada!";
        }
    } while (pilih != 0);

    return 0;
}
