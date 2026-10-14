#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    string nama = "Gilman Dawil Aqli";
    string nim = "12345678";
    string prodi = "Teknik Informatika";

    int mandiri = 85, terstruktur = 80, uts = 85, uas = 90;
    float nilaiAkhir = 85.5;
    char grade = 'A';

    long long ukt = 5000000;
    long long bayar = 0;

    int menuUtama, subKRS, subKeuangan, ulang;

mulai:
    cout << "=========================================================" << endl;
    cout << "              SISTEM INFORMASI AKADEMIK MINI             " << endl;
    cout << "=========================================================" << endl;
    cout << "1. Data Mahasiswa" << endl;
    cout << "2. Kartu Rencana Studi (KRS)" << endl;
    cout << "3. Nilai & Evaluasi" << endl;
    cout << "4. Jadwal Kuliah" << endl;
    cout << "5. Keuangan Mahasiswa" << endl;
    cout << "6. Keluar" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Pilih Menu Utama (1-6) : "; cin >> menuUtama;
    cout << "---------------------------------------------------------" << endl;

    switch (menuUtama)
    {
    case 1:
        cout << "[ MENU 1: DATA MAHASISWA ]" << endl;
        cout << "1. Lihat Data Mahasiswa" << endl;
        cout << "2. Ubah Data Mahasiswa" << endl;
        int subData;
        cout << "Pilihan Submenu (1-2)  : "; cin >> subData;
        cout << "---------------------------------------------------------" << endl;

        if (subData == 1) {
            cout << "Nama Mahasiswa         : " << nama << endl;
            cout << "NIM                    : " << nim << endl;
            cout << "Program Studi          : " << prodi << endl;
        }
        else if (subData == 2) {
            cin.ignore();
            cout << "Masukkan Nama Baru     : "; getline(cin, nama);
            cout << "Masukkan NIM Baru      : "; cin >> nim;
            cin.ignore();
            cout << "Masukkan Prodi Baru    : "; getline(cin, prodi);
            cout << "---------------------------------------------------------" << endl;
            cout << "Data Mahasiswa berhasil diperbarui!" << endl;
        }
        else {
            cout << "Error: Submenu Data Mahasiswa tidak valid!" << endl;
        }
        break;

    case 2:
        cout << "[ MENU 2: KARTU RENCANA STUDI (KRS) ]" << endl;
        cout << "1. Lihat KRS" << endl;
        cout << "2. Tambah Mata Kuliah" << endl;
        cout << "3. Hapus Mata Kuliah" << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Pilih Submenu KRS (1-3): "; cin >> subKRS;
        cout << "---------------------------------------------------------" << endl;

        switch (subKRS)
        {
        case 1:
            cout << "Daftar Matkul Terambil : " << endl;
            cout << "- Pemrograman C++ (3 SKS)" << endl;
            cout << "- Basis Data (3 SKS)" << endl;
            cout << "- Algoritma & Struktur Data (3 SKS)" << endl;
            cout << "Total SKS              : 9 SKS" << endl;
            break;
        case 2:
            cout << "Fitur Tambah Mata Kuliah berhasil dibuka." << endl;
            cout << "Status                 : Mata Kuliah berhasil ditambahkan ke KRS." << endl;
            break;
        case 3:
            cout << "Fitur Hapus Mata Kuliah berhasil dibuka." << endl;
            cout << "Status                 : Mata Kuliah berhasil dihapus dari KRS." << endl;
            break;
        default:
            cout << "Error: Submenu KRS [" << subKRS << "] tidak valid!" << endl;
            break;
        }
        break;

    case 3:
        cout << "[ MENU 3: NILAI & EVALUASI ]" << endl;
        cout << "Masukkan Nilai Tugas Mandiri (0-100)   : "; cin >> mandiri;
        cout << "Masukkan Nilai Tugas Terstruktur (0-100): "; cin >> terstruktur;
        cout << "Masukkan Nilai UTS (0-100)             : "; cin >> uts;
        cout << "Masukkan Nilai UAS (0-100)             : "; cin >> uas;
        cout << "---------------------------------------------------------" << endl;

        if (mandiri < 0 || mandiri > 100 || terstruktur < 0 || terstruktur > 100 ||
            uts < 0 || uts > 100 || uas < 0 || uas > 100) {
            cout << "Error: Input nilai tidak valid! Nilai harus berada pada rentang 0-100." << endl;
            goto opsi_ulang;
        }

        nilaiAkhir = (0.20 * mandiri) + (0.20 * terstruktur) + (0.20 * uts) + (0.40 * uas);

        if (nilaiAkhir >= 80 && nilaiAkhir <= 100) {
            grade = 'A';
        }
        else if (nilaiAkhir >= 70) {
            grade = 'B';
        }
        else if (nilaiAkhir >= 60) {
            grade = 'C';
        }
        else if (nilaiAkhir >= 50) {
            grade = 'D';
        }
        else {
            grade = 'E';
        }

        cout << "Nama Mahasiswa         : " << nama << " (" << nim << ")" << endl;
        cout << "Nilai Akhir            : " << nilaiAkhir << endl;
        cout << "Grade                  : " << grade << endl;
        cout << "Status Evaluasi        : ";
        if (grade == 'A' || grade == 'B' || grade == 'C') {
            cout << "LULUS (Dapat Mengikuti Program Berikutnya)" << endl;
        }
        else {
            cout << "TIDAK LULUS / HARUS PERBAIKAN" << endl;
        }
        break;

    case 4:
        cout << "[ MENU 4: JADWAL KULIAH ]" << endl;
        cout << "Senin  | 08.00 - 10.30 | Pemrograman C++           | R. Lab 1" << endl;
        cout << "Rabu   | 10.30 - 13.00 | Basis Data                | R. Lab 3" << endl;
        cout << "Jumat  | 13.00 - 15.30 | Algoritma & Struktur Data | R. 302" << endl;
        break;

    case 5:
        cout << "[ MENU 5: KEUANGAN MAHASISWA ]" << endl;
        cout << "1. Cek Tagihan UKT" << endl;
        cout << "2. Bayar UKT" << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Pilih Submenu (1-2)    : "; cin >> subKeuangan;
        cout << "---------------------------------------------------------" << endl;

        if (subKeuangan == 1) {
            cout << "Sisa Tagihan UKT       : Rp " << ukt << endl;
            cout << "Status                 : " << (ukt == 0 ? "LUNAS" : "BELUM LUNAS") << endl;
        }
        else if (subKeuangan == 2) {
            if (ukt == 0) {
                cout << "Tagihan UKT Anda sudah LUNAS." << endl;
            }
            else {
                cout << "Tagihan UKT Saat Ini   : Rp " << ukt << endl;
                cout << "Masukkan Nominal Bayar : Rp "; cin >> bayar;

                if (bayar <= 0) {
                    cout << "Error: Nominal pembayaran harus lebih besar dari Rp 0!" << endl;
                }
                else if (bayar > ukt) {
                    cout << "Error: Nominal pembayaran melebihi sisa tagihan UKT!" << endl;
                }
                else {
                    ukt -= bayar;
                    cout << "Pembayaran sebesar Rp " << bayar << " berhasil diproses." << endl;
                    cout << "Sisa Tagihan UKT Anda  : Rp " << ukt << endl;
                }
            }
        }
        else {
            cout << "Error: Submenu Keuangan tidak valid!" << endl;
        }
        break;

    case 6:
        cout << "Program Sistem Informasi Akademik selesai. Terima kasih!" << endl;
        return 0;

    default:
        cout << "Error: Pilihan [" << menuUtama << "] tidak valid! Silakan pilih opsi 1-6." << endl;
        break;
    }

opsi_ulang:
    cout << endl << "Apakah ingin kembali ke menu utama? (1/0): "; cin >> ulang;
    if (ulang == 1) {
        system("cls");
        goto mulai;
    }

    return 0;
}