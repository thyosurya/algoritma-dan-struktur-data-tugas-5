

---

## Informasi Tambahan

**- **Nama Mahasiswa**: Moh. Radithyo Surya
- **Program Studi**: Sistem Informasi
- **Mata Kuliah**: Algoritma dan Struktur Data
- **Dosen Pengampu**: Alfian Zakaria, ST., M.T., MCE**


# Program Data Mahasiswa dan Persediaan Barang Toko

Program ini terdiri dari dua fitur utama:
1. Mengelola data mahasiswa
2. Mengelola data persediaan barang di toko

Pengguna dapat memilih salah satu fitur untuk dijalankan pada saat program berjalan.

## Struktur Program

### 1. Program Data Mahasiswa

Program ini memungkinkan pengguna untuk memasukkan data mahasiswa, termasuk:
- **NIM**
- **Nama**
- **Tempat Lahir**
- **Tanggal Lahir** (format: dd-mm-yyyy)
- **Alamat**

Data yang diinputkan akan disimpan dalam struktur `Mahasiswa` dan ditampilkan kembali kepada pengguna.

#### Struktur Data Mahasiswa
```cpp
struct Mahasiswa {
    string nim;
    string nama;
    string tempatLahir;
    string tanggalLahir;
    string alamat;
};
```

### 2. Program Data Persediaan Barang Toko

Program ini memungkinkan pengguna untuk memasukkan data barang di toko. Pengguna akan diminta untuk menginput jumlah barang dan rincian setiap barang meliputi:
- **Kode Barang**
- **Nama Barang**
- **Unit (jumlah stok)**
- **Harga**

Data yang diinputkan akan disimpan dalam struktur `Barang` dan ditampilkan dalam bentuk tabel.

#### Struktur Data Barang
```cpp
struct Barang {
    string kode_brg;
    string nama;
    int unit;
    double harga;
};
```

## Cara Menjalankan Program

1. Saat program dijalankan, pengguna akan diminta untuk memilih salah satu program:
   - **1** untuk Program Data Mahasiswa
   - **2** untuk Program Data Persediaan Barang Toko
2. Masukkan pilihan yang diinginkan, lalu masukkan data sesuai petunjuk di layar.

## Kebutuhan Program

Program ini ditulis menggunakan bahasa C++ dan membutuhkan `iostream` untuk input/output.

## Contoh Output Program

### Program Data Mahasiswa

Jika pengguna memilih untuk memasukkan data mahasiswa, program akan meminta informasi sebagai berikut:

```
Masukkan NIM: 531410001
Masukkan Nama: Susana
Masukkan Tempat Lahir: Gorontalo
Masukkan Tanggal Lahir (dd-mm-yyyy): 17-01-1981
Masukkan Alamat: Jl. Sudirman No.6, Kota Gorontalo
```

Output:
```
Data Mahasiswa:
NIM          : 531410001
Nama         : Susana
Tempat Lahir : Gorontalo
Tanggal Lahir: 17-01-1981
Alamat       : Jl. Sudirman No.6, Kota Gorontalo
```

### Program Data Persediaan Barang Toko

Jika pengguna memilih untuk memasukkan data persediaan barang, program akan meminta informasi sebagai berikut:

```
Jumlah Data: 2

Masukkan data untuk barang ke-1:
Kode Barang: B001
Nama Barang: Pensil
Unit: 100
Harga: 2000

Masukkan data untuk barang ke-2:
Kode Barang: B002
Nama Barang: Buku Tulis
Unit: 50
Harga: 5000
```

Output:
```
Data Persediaan Toko XYZ:
----------------------------------------
No	Kode	Nama		Unit	Harga
----------------------------------------
1	B001	Pensil		100	Rp2000
2	B002	Buku Tulis	50	Rp5000
```

## Informasi Tambahan

- **Nama Mahasiswa**: Moh. Radithyo Surya
- **Program Studi**: Sistem Informasi
- **Mata Kuliah**: Algoritma dan Struktur Data
- **Dosen Pengampu**: Alfian Zakaria, ST., M.T., MCE

## Lisensi

Program ini dibuat untuk keperluan akademis dan pembelajaran.
