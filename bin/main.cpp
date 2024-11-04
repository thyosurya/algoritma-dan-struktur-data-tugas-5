#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string tempatLahir;
    string tanggalLahir;
    string alamat;
};

void programMahasiswa() {
    Mahasiswa mhs;

    cout << "Masukkan NIM: ";
    cin >> mhs.nim;

    cout << "Masukkan Nama: ";
    cin >> ws;
    getline(cin, mhs.nama);

    cout << "Masukkan Tempat Lahir: ";
    getline(cin, mhs.tempatLahir);

    cout << "Masukkan Tanggal Lahir (dd-mm-yyyy): ";
    getline(cin, mhs.tanggalLahir);

    cout << "Masukkan Alamat: ";
    getline(cin, mhs.alamat);

    // Menampilkan data mahasiswa
    cout << "\nData Mahasiswa:\n";
    cout << "NIM          : " << mhs.nim << endl;
    cout << "Nama         : " << mhs.nama << endl;
    cout << "Tempat Lahir : " << mhs.tempatLahir << endl;
    cout << "Tanggal Lahir: " << mhs.tanggalLahir << endl;
    cout << "Alamat       : " << mhs.alamat << endl;
}

void programPersediaan() {
    int jumlahData;

    cout << "Input Data Persediaan\n";
    cout << "Jumlah Data: ";
    cin >> jumlahData;

    struct Barang {
        string kode_brg;
        string nama;
        int unit;
        double harga;
    };
    Barang persediaan[jumlahData];

    for (int i = 0; i < jumlahData; i++) {
        cout << "\nMasukkan data untuk barang ke-" << i + 1 << ":\n";

        cout << "Kode Barang: ";
        cin >> persediaan[i].kode_brg;

        cout << "Nama Barang: ";
        cin >> ws;
        getline(cin, persediaan[i].nama);

        cout << "Unit: ";
        cin >> persediaan[i].unit;

        cout << "Harga: ";
        cin >> persediaan[i].harga;
    }

    cout << "\nData Persediaan Toko XYZ:\n";
    cout << "----------------------------------------\n";
    cout << "No\tKode\tNama\t\tUnit\tHarga\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < jumlahData; i++) {
        cout << i + 1 << "\t" << persediaan[i].kode_brg << "\t"
             << persediaan[i].nama << "\t\t"
             << persediaan[i].unit << "\t"
             << "Rp" << persediaan[i].harga << endl;
    }
}

int main() {
    int pilihan;

    cout << "Pilih Program yang Ingin Dijalankan:\n";
    cout << "1. Program Data Mahasiswa\n";
    cout << "2. Program Data Persediaan Barang Toko\n";
    cout << "Masukkan pilihan (1 atau 2): ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "\nMenjalankan Program Data Mahasiswa...\n";
        programMahasiswa();
    } else if (pilihan == 2) {
        cout << "\nMenjalankan Program Data Persediaan Barang Toko...\n";
        programPersediaan();
    } else {
        cout << "Pilihan tidak valid. Silakan jalankan ulang program dan masukkan pilihan yang benar.\n";
    }

    return 0;
}
