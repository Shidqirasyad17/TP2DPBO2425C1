

# JANJI
Saya Shidqi Rasyad Firjatulah dengan NIM 2408156 mengerjakan TP1 pada mata kuliah DPBO untuk keberkahannya saya menyatakan bahwa saya tidak melakukan kecurangan sebagaimana yang dispesifikasikan.


---

# FLOW KODE
### Class Produk
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
    
### Class Tv
- Mempunyai atribut seperti :
  - UkuranLayar
    Menyimpan ukuran layar (32 inch, 42 inch, 55 inch)
  - Resoulusi
    Untuk resoulusi gambar (HD, FULL HD, 4K, 8K)
  - TipeLayar
    Untuk jenis layar (LED, QLED, OLED, PLASMA)
    
### Class SmartTv
- Mempunyai atribut seperti :
   - SistemOperasi
     SistemOperasi yang dipunyai SmartTv (AndroidTv, Tizen, WebOS)
   - Aplikasi
     Untuk menandakan apakah sudah memiliki aplikasi bawaan
   - Internet
     untuk menandakan apakaha bisa terkoneksi internet

 ### Methods
- Getter & setter (di semua class)  
  Untuk mengambil dan mengubah nilai atribut  

- AddData() --> berada di class SmartTv  
  Untuk menambahkan data 

- ShowData() --> berada di class SmartTv  
  Untuk menampilkan seluruh data 
---
##  DIAGRAM
<img width="796" height="602" alt="image" src="https://github.com/user-attachments/assets/97f5ced3-93a0-4415-bec0-26dfcf9515e4" />



---
##  ALUR PROGRAM

### 1 C++ 
- **Produk Class:** Menyimpan atribut produk (id, merk, harga, stok)  
- **Tv Class:** Turunan dari produk class. mempunyai atribut UkuranLayar, Resolusi, dan TipeLayar.
- **SmartTV Class:** Turunan dari class Tv dan Produk. Mempunyai atribut SistemOperasi, Aplikasi, dan Internet.
- **Main Program:** Menampilkan 5 objek data, dan bisa meneriman input user untuk Tambah Data dan Tampilkan.

 **Dokumentasi**
  
  ![dokumentasiCPP](https://github.com/user-attachments/assets/c90030c0-1b4e-4895-85c4-4f77804cc9a2)

---
### 2️ Python
- **Produk Class:** Menyimpan atribut produk (id, merk, harga, stok)  
- **Tv Class:** Turunan dari produk class. mempunyai atribut UkuranLayar, Resolusi, dan TipeLayar.
- **SmartTV Class:** Turunan dari class Tv dan Produk. Mempunyai atribut SistemOperasi, Aplikasi, dan Internet.
- **Main Program:** Menampilkan 5 objek data, dan bisa meneriman input user untuk Tambah Data dan Tampilkan.

  **Dokumentasi**
  
  ![dokumentasiPYTHON](https://github.com/user-attachments/assets/a072eef9-3bd3-4660-acc6-2bd1ebb5a3a6)


---
### 3 PHP
- **Produk Class:** Menyimpan atribut prdouk (id, merk, harga, stok, dan gambar)  
- **Tv Class:** Turunan dari produk class. mempunyai atribut UkuranLayar, Resolusi, dan TipeLayar.
- **SmartTV Class:** Turunan dari class Tv dan Produk. Mempunyai atribut SistemOperasi, Aplikasi, dan Internet.
- **Main Program:** Menampilkan 5 objek data, dan bisa meneriman input user untuk Tambah Data dan Tampilkan.

   **Dokumentasi**
  
  ![dokumentasiPHP](https://github.com/user-attachments/assets/7d2e0f96-b406-4b4c-b164-1fc7fa61c7ad)

  
---
### 4️ Java
- **Produk Class:** Menyimpan atribut produk (id, merk, harga, stok)  
- **Tv Class:** Turunan dari produk class. mempunyai atribut UkuranLayar, Resolusi, dan TipeLayar.
- **SmartTV Class:** Turunan dari class Tv dan Produk. Mempunyai atribut SistemOperasi, Aplikasi, dan Internet.
- **Main Program:** Menampilkan 5 objek data, dan bisa meneriman input user untuk Tambah Data dan Tampilkan.

   **Dokumentasi**
  
  ![dokumentasiJAVA](https://github.com/user-attachments/assets/62ea72b0-c1ea-49fd-ac37-6d77846446b1)

  
---


