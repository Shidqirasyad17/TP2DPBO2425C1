import java.util.ArrayList;

public class SmartTv extends Tv {
    private String sistemOperasi;
    private String internet;
    private String aplikasi;
    private ArrayList<SmartTv> produk = new ArrayList<>();

    
    public SmartTv() {}

    // constructor
    public SmartTv(int idProduk, String merk, int harga, int stok, int ukuranLayar,
                   String resolusi, String tipeLayar,
                   String sistemOperasi, String internet, String aplikasi) {
        super(idProduk, merk, harga, stok, ukuranLayar, resolusi, tipeLayar);
        this.sistemOperasi = sistemOperasi;
        this.internet = internet;
        this.aplikasi = aplikasi;
    }

    // getter & setter
    public String getSistemOperasi() { 
    return sistemOperasi; }
    public void setSistemOperasi(String sistemOperasi) { 
    this.sistemOperasi = sistemOperasi; }

    public String getInternet() { 
    return internet; }
    public void setInternet(String internet) { 
    this.internet = internet; }

    public String getAplikasi() { 
    return aplikasi; }
    public void setAplikasi(String aplikasi) { 
    this.aplikasi = aplikasi; }

    // untuk menambah data 
    public void addData(int idProduk, String merk, int harga, int stok, int ukuranLayar,
                        String resolusi, String tipeLayar,
                        String sistemOperasi, String internet, String aplikasi) {
        produk.add(new SmartTv(idProduk, merk, harga, stok, ukuranLayar,
                               resolusi, tipeLayar, sistemOperasi, internet, aplikasi));
    }

    // untuk menampilkan data
    public void showData() {
    System.out.println("\nDaftar Smart TV:");

    //cek apakah ada data
    if (produk.isEmpty()) {
        System.out.println("Data Not Found");
        return;
    }

    //inisialisasi lebar kolom minimal
    int wId = 2, wMerk = 4, wHarga = 5, wStok = 4;
    int wLayar = 12, wResolusi = 8, wTipe = 10;
    int wOs = 14, wInternet = 8, wAplikasi = 8;

    // mencari lebar maksimal kolom menggunakan data
    for (SmartTv tv : produk) {
        wId = Math.max(wId, String.valueOf(tv.getIdProduk()).length());
        wMerk = Math.max(wMerk, tv.getMerk().length());
        wHarga = Math.max(wHarga, String.valueOf(tv.getHarga()).length());
        wStok = Math.max(wStok, String.valueOf(tv.getStok()).length());
        wLayar = Math.max(wLayar, String.valueOf(tv.getUkuranLayar()).length());
        wResolusi = Math.max(wResolusi, tv.getResolusi().length());
        wTipe = Math.max(wTipe, tv.getTipe().length());
        wOs = Math.max(wOs, tv.getSistemOperasi().length());
        wInternet = Math.max(wInternet, tv.getInternet().length());
        wAplikasi = Math.max(wAplikasi, tv.getAplikasi().length());
    }

    // cetak garis header
    System.out.print("+");
    int[] widths = {wId, wMerk, wHarga, wStok, wLayar, wResolusi, wTipe, wOs, wInternet, wAplikasi};
    for (int w : widths) {
        for (int i = 0; i < w + 2; i++) System.out.print("-");
        System.out.print("+");
    }
    System.out.println();

    // cetak header tabel
    System.out.printf("| %-" + wId + "s | %-" + wMerk + "s | %-" + wHarga + "s | %-" + wStok + "s | %-" + wLayar + "s | %-" + wResolusi + "s | %-" + wTipe + "s | %-" + wOs + "s | %-" + wInternet + "s | %-" + wAplikasi + "s |\n",
            "ID", "Merk", "Harga", "Stok", "Ukuran Layar", "Resolusi", "Tipe Layar", "Sistem Operasi", "Internet", "Aplikasi");

    //cetak garis setalh header
    System.out.print("+");
    for (int w : widths) {
        for (int i = 0; i < w + 2; i++) System.out.print("-");
        System.out.print("+");
    }
    System.out.println();

    // cetak data 
    for (SmartTv tv : produk) {
        System.out.printf("| %-" + wId + "s | %-" + wMerk + "s | %-" + wHarga + "s | %-" + wStok + "s | %-" + wLayar + "s | %-" + wResolusi + "s | %-" + wTipe + "s | %-" + wOs + "s | %-" + wInternet + "s | %-" + wAplikasi + "s |\n",
                tv.getIdProduk(), tv.getMerk(), tv.getHarga(), tv.getStok(),
                tv.getUkuranLayar(), tv.getResolusi(), tv.getTipe(),
                tv.getSistemOperasi(), tv.getInternet(), tv.getAplikasi());

        // cetak garis setelah setiap baris data
        System.out.print("+");
        for (int w : widths) {
            for (int i = 0; i < w + 2; i++) System.out.print("-");
            System.out.print("+");
        }
        System.out.println();
    }
}
}