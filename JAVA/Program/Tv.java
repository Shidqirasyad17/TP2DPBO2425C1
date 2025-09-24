import java.util.ArrayList;
public class Tv extends Produk {
    private int UkuranLayar;
    private String resolusi;
    private String tipeLayar;

    public Tv(){
        
    }
    //constructor
    public Tv(int id_produk, String merk, int harga, int stok, int UkuranLayar, String resolusi, String tipeLayar) {
        super(id_produk, merk, harga, stok);
        this.UkuranLayar = UkuranLayar;
        this.resolusi = resolusi;
        this.tipeLayar = tipeLayar;
    }

    // gtter dan setter
    public int getUkuranLayar() {
        return UkuranLayar;
    }

    public void setUkuranLayar(int UkuranLayar) {
        this.UkuranLayar = UkuranLayar;
    }

    public String getResolusi() {
        return resolusi;
    }

    public void setResolusi(String resolusi) {
        this.resolusi = resolusi;
    }

    public String getTipe() {
        return tipeLayar;
    }

    public void setTipe(String tipeLayar) {
        this.tipeLayar = tipeLayar;
    }
}
