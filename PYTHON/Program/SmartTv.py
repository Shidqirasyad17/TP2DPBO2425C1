from Tv import Tv 

class SmartTv(Tv):
    #constructor
    def __init__(self, id_Produk=0, merk="", harga=0, stok=0,
                 UkuranLayar=0, resolusi="", TipeLayar="",
                 SistemOperasi="", Internet="", Aplikasi=""):
        super().__init__(id_Produk, merk, harga, stok, UkuranLayar, resolusi, TipeLayar)
        self.SistemOperasi = SistemOperasi
        self.Internet = Internet
        self.Aplikasi = Aplikasi
        self.Produk = []

    #getter dan setter
    def getSistemOperasi(self):
        return self.SistemOperasi

    def setSistemOperasi(self, SistemOperasi):
        self.SistemOperasi = SistemOperasi

    def getInternet(self):
        return self.Internet

    def setInternet(self, Internet):
        self.Internet = Internet

    def getAplikasi(self):
        return self.Aplikasi

    def setAplikasi(self, Aplikasi):
        self.Aplikasi = Aplikasi
    
    # untuk menambahkan data
    def addData(self, id_laptop, merk, harga, stok, UkuranLayar, resolusi, TipeLayar, SistemOperasi, Internet, Aplikasi):
        self.Produk.append(SmartTv(id_laptop, merk, harga, stok, UkuranLayar, resolusi, TipeLayar, SistemOperasi, Internet, Aplikasi))
    
    # untuk menampilkan data
    def show_data(self):
        if not self.Produk:
            print("Data Not Found")
            return

        # menghitung lebar kolom otomatis
        w_id = max(2, max(len(str(tv.id_produk)) for tv in self.Produk))
        w_merk = max(4, max(len(tv.merk) for tv in self.Produk))
        w_harga = max(5, max(len(str(tv.harga)) for tv in self.Produk))
        w_stok = max(4, max(len(str(tv.stok)) for tv in self.Produk))
        w_layar = max(12, max(len(str(tv.UkuranLayar)) for tv in self.Produk))
        w_resolusi = max(8, max(len(tv.resolusi) for tv in self.Produk))
        w_tipe = max(10, max(len(tv.tipeLayar) for tv in self.Produk))
        w_os = max(14, max(len(tv.SistemOperasi) for tv in self.Produk))
        w_internet = max(8, max(len(tv.Internet) for tv in self.Produk))
        w_aplikasi = max(8, max(len(tv.Aplikasi) for tv in self.Produk))

        # semua lebar kolom dikumpulkan di widths
        widths = [w_id, w_merk, w_harga, w_stok, w_layar, w_resolusi, w_tipe, w_os, w_internet, w_aplikasi]

        # cetak garis atas
        print('+' + '+'.join(['-' * (w + 2) for w in widths]) + '+')

        # cetak header tabel
        headers = ["ID", "Merk", "Harga", "Stok", "Ukuran Layar", "Resolusi", "Tipe Layar", "Sistem Operasi", "Internet", "Aplikasi"]
        print('| ' + ' | '.join(f"{h:<{w}}" for h, w in zip(headers, widths)) + ' |')

        # Cetak garis bawah header
        print('+' + '+'.join(['-' * (w + 2) for w in widths]) + '+')

        # cetak data Produk
        for tv in self.Produk:
            data = [tv.id_produk, tv.merk, tv.harga, tv.stok, tv.UkuranLayar, tv.resolusi, tv.tipeLayar, tv.SistemOperasi, tv.Internet, tv.Aplikasi]
            print('| ' + ' | '.join(f"{str(d):<{w}}" for d, w in zip(data, widths)) + ' |')
            print('+' + '+'.join(['-' * (w + 2) for w in widths]) + '+')