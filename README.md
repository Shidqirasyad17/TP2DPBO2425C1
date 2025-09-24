

# JANJI
Saya Shidqi Rasyad Firjatulah dengan NIM 2408156 mengerjakan TP1 pada mata kuliah DPBO untuk keberkahannya saya menyatakan bahwa saya tidak melakukan kecurangan sebagaimana yang dispesifikasikan.


---

# FLOW KODE
**Class Produk**
- Mempunyai atribut seperti : 
  - Id_Porduk
    Untuk identitas unik
  - Merk
    Menyimpan brand produk.
  - Harga
    Menyimpan harga jual produk.
  - Stok
    jumlah stok produk
  - Gambar(hanya di php)
    gambar produk
    
**Class Tv**
- Mempunyai atribut seperti :
  - UkuranLayar
    Menyimpan ukuran layar (32 inch, 42 inch, 55 inch)
  - Resoulusi
    Untuk resoulusi gambar (HD, FULL HD, 4K, 8K)
  - TipeLayar
    Untuk jenis layar (LED, QLED, OLED, PLASMA)
    
**Class SmartTv**
- Mempunyai atribut seperti :
   - SistemOperasi
     SistemOperasi yang dipunyai SmartTv (AndroidTv, Tizen, WebOS)
   - Aplikasi
     Untuk menandakan apakah sudah memiliki aplikasi bawaan
   - Internet
     untuk menandakan apakaha bisa terkoneksi internet
  **Methods**
  - Getter & setter
    Untuk mengambil dan mengubah nilai atribut
  - AddData()
    Untuk menambahkan data produk SmarTv
  - ShowData()
    Untuk menampilkan seluruh data produk SmartTv
---
##  DIAGRAM
<img width="729" height="616" alt="image" src="https://github.com/user-attachments/assets/a8dfcaa7-e89d-4ed6-8691-3326151aed36" />


---
##  DESAIN PROGRAM

### 1 C++ 
- **Laptop Class:** Menyimpan atribut laptop (id, merk, harga, stok)  
- **ManageLaptop Class:** Mengelola CRUD menggunakan vector
- **Main Program:** Menerima input user dan memanggil method CRUD
 **Dokumentasi**
  <img width="1904" height="913" alt="CPP" src="https://github.com/user-attachments/assets/fa8a3a4d-cade-4ac4-b033-6194d0fcaec8" />
---
### 2️ Python
- **Laptop Class:** Menyimpan atribut laptop (id, merk, harga, stok)    
- **ManageLaptop Class:** Mengelola CRUD menggunakan **list**  
- **Main Program:** Menerima input user dan memanggil method CRUD
  **Dokumentasi**
![python](https://github.com/user-attachments/assets/93849b79-c5c3-4e7a-b81b-fbc28b7acebe)
---
### 3 PHP
- **Laptop Class:** Menyimpan atribut laptop (id, merk, harga, stok, gambar)  
- **ManageLaptop Class:** Menangani CRUD, data disimpan di **session**  
- **Index.php:** Form tambah laptop, tabel daftar laptop, search untuk mencari data laptop, tombol Update dan Hapus
  **Dokumentasi**
  <img width="1919" height="1079" alt="PHP" src="https://github.com/user-attachments/assets/694871ed-76e1-4ac3-ba10-5859a62ea125" />
---
### 4️4 Java
- **Laptop Class:** Menyimpan atribut laptop (id, merk, harga, stok)  
- **ManageLaptop Class:** CRUD menggunakan **ArrayList<Laptop>**  
- **Main Program:** Menerima input user dan memanggil method CRUD
  **Dokumentasi**
  <img width="1914" height="1020" alt="Java" src="https://github.com/user-attachments/assets/9e8801fb-550a-4242-8681-47949358df21" />
---


