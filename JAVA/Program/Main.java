import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SmartTv St = new SmartTv();
        int pilih;
        St.addData(1, "Polytron PLD 50UV8959", 4399000, 15, 50, "4K UHD", "LED", "Smart TV (Polytron)", "Tersedia", "Tersedia");
        St.addData(2, "LG OLED55C2PSA", 24198000, 8, 55, "4K UHD", "OLED", "webOS", "Tersedia", "Tersedia");
        St.addData(3, "Sony Bravia KD-55X80L", 11999000, 10, 55, "4K UHD", "LED", "Google TV (Android)", "Tersedia", "Tersedia");
        St.addData(4, "Panasonic TH-55HX650G", 7200000, 12, 55, "4K UHD", "IPS LED", "My Home Screen", "Tersedia", "Tersedia");
        St.addData(5, "Philips 55OLED706", 15500000, 6, 55, "4K UHD", "OLED", "Android TV", "Tersedia", "Tersedia");
        St.showData();

        do {
            System.out.println("\n|===== MENU SMART TV =====|");
            System.out.println("|  1. Tambah Smart TV     |");
            System.out.println("|  2. Tampilkan Data      |");
            System.out.println("|  0. Exit                |");
            System.out.println("|=========================|");
            System.out.print("Pilih Menu : ");
            pilih = sc.nextInt();
            sc.nextLine(); 

            if (pilih == 1) {
                System.out.println("Masukan Data yang ingin ditambahkan!");
                System.out.print("ID PRODUK : ");
                int id = sc.nextInt(); sc.nextLine();
                System.out.print("Merk : ");
                String merk = sc.nextLine();
                System.out.print("Harga : ");
                int harga = sc.nextInt(); sc.nextLine();
                System.out.print("Stok : ");
                int Stok = sc.nextInt(); sc.nextLine();
                System.out.print("Ukuran Layar : ");
                int ukuran = sc.nextInt(); sc.nextLine();
                System.out.print("Resolusi : ");
                String resolusi = sc.nextLine();
                System.out.print("Tipe Layar : ");
                String tipe = sc.nextLine();
                System.out.print("SiStem Operasi : ");
                String os = sc.nextLine();
                System.out.print("Internet : ");
                String internet = sc.nextLine();
                System.out.print("Aplikasi : ");
                String aplikasi = sc.nextLine();

                St.addData(id, merk, harga, Stok, ukuran, resolusi, tipe, os, internet, aplikasi);
            } else if (pilih == 2) {
                St.showData();
            } else if (pilih == 0) {
                System.out.println("Selamat Tinggal!");
            } else {
                System.out.println("Pilihan tidak ada!");
            }
        } while (pilih != 0);

        sc.close();
    }
}