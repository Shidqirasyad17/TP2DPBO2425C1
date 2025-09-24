from SmartTv import SmartTv

def main():
    st = SmartTv()

    # Tambahkan data awal
    st.addData(1, "Polytron PLD 50UV8959", 4399000, 15, 50, "4K UHD", "LED", "Smart TV (Polytron)", "Tersedia", "Tersedia")
    st.addData(2, "LG OLED55C2PSA", 24198000, 8, 55, "4K UHD", "OLED", "webOS", "Tersedia", "Tersedia")
    st.addData(3, "Sony Bravia KD-55X80L", 11999000, 10, 55, "4K UHD", "LED", "Google TV (Android)", "Tersedia", "Tersedia")
    st.addData(4, "Panasonic TH-55HX650G", 7200000, 12, 55, "4K UHD", "IPS LED", "My Home Screen", "Tersedia", "Tersedia")
    st.addData(5, "Philips 55OLED706", 15500000, 6, 55, "4K UHD", "OLED", "Android TV", "Tersedia", "Tersedia")

    st.show_data()

    while True:
        print("\n|===== MENU SMART TV =====|")
        print("|  1. Tambah Smart TV     |")
        print("|  2. Tampilkan Data      |")
        print("|  0. Exit                |")
        print("|=========================|")
        pilih = input("Pilih Menu: ")

        if pilih == "1":
            print("Masukkan Data yang ingin ditambahkan!")
            id_produk = int(input("ID PRODUK: "))
            merk = input("Merk: ")
            harga = int(input("Harga: "))
            stok = int(input("Stok: "))
            ukuran_layar = int(input("Ukuran Layar: "))
            resolusi = input("Resolusi: ")
            tipe_layar = input("Tipe Layar: ")
            sistem_operasi = input("Sistem Operasi: ")
            internet = input("Internet: ")
            aplikasi = input("Aplikasi: ")

            st.addData(id_produk, merk, harga, stok, ukuran_layar, resolusi, tipe_layar, sistem_operasi, internet, aplikasi)

        elif pilih == "2":
            st.show_data()

        elif pilih == "0":
            print("Selamat Tinggal!")
            break
        else:
            print("Pilihan tidak ada!")

if __name__ == "__main__":
    main()
