import java.util.ArrayList;
public class Produk {
    private int id_produk;
    private String merk;
    private int harga;
    private int stok;

    public Produk(){
        
    }
    // constructor
    public Produk(int id_produk, String merk, int harga, int stok) {
        this.id_produk = id_produk;
        this.merk = merk;
        this.harga = harga;
        this.stok = stok;
    }

    // getter dan setter
    public int getIdProduk() {
        return id_produk;
    }

    public String getMerk() {
        return merk;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public int getHarga() {
        return harga;
    }

    public void setHarga(int harga) {
        this.harga = harga;
    }

    public int getStok() {
        return stok;
    }

    public void setStok(int stok) {
        this.stok = stok;
    }
}
