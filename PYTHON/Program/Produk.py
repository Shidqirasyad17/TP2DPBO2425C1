class Produk:
    #constructor
    def __init__(self, id_produk, merk, harga, stok):
        self.id_produk = id_produk
        self.merk = merk
        self.harga = harga
        self.stok = stok

    # getter dan setter
    def getid_produk(self):
        return self.id_produk

    def getMerk(self):
        return self.merk

    def setMerk(self, merk):
        self.merk = merk

    def getHarga(self):
        return self.harga

    def setHarga(self, harga):
        self.harga = harga

    def getStok(self):
        return self.stok

    def setStok(self, stok):
        self.stok = stok