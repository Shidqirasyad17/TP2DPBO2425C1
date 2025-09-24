from Produk import Produk  

class Tv(Produk):
    #constructor
    def __init__(self, id_produk, merk, harga, stok, UkuranLayar, resolusi, TipeLayar):
        super().__init__(id_produk, merk, harga, stok)
        self.UkuranLayar = UkuranLayar
        self.resolusi = resolusi
        self.tipeLayar = TipeLayar

    # getter dan setter
    def getUkuranLayar(self):
        return self.UkuranLayar

    def setUkuranLayar(self, UkuranLayar):
        self.UkuranLayar = UkuranLayar

    def getResolusi(self):
        return self.resolusi

    def setResolusi(self, resolusi):
        self.resolusi = resolusi

    def getTipe(self):
        return self.tipeLayar

    def setTipe(self, tipeLayar):
        self.tipeLayar = tipeLayar


