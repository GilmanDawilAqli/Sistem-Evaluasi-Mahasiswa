#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
int aktif, kehadiran, NilaiAkhir, SatuanTugas, ulang;
float IPK;

mulai:

cout << "==========================================================================================" << endl;
cout << "                                Sistem Evaluasi Mahasiswa" << endl;
cout << "==========================================================================================" << endl;

cout << "Masukkan status aktif (1/0): "; cin >> aktif;
if (aktif < 0 || aktif > 1) {
	system("cls");
	cout << "Input status keaktifan tidak falid [" << aktif << "] (1/0)" << endl;
	goto mulai;
}
cout << "Masukkan kehadiran (0-100): "; cin >> kehadiran;
if (kehadiran < 0 || kehadiran > 100) {
	system("cls");
	cout << "Input nilai kehadiran tidak falid [" << kehadiran << "] (0-100)" << endl;
	goto mulai;
}
cout << "Satuan Tugas Lengkap (1/0)? "; cin >> SatuanTugas;
if (SatuanTugas < 0 || SatuanTugas > 1) {
	system("cls");
	cout << "Input satuan tugas tidak valid [" << SatuanTugas << "] (1/0)" << endl;
	goto mulai;
}
cout << "Masukkan IPK (0.0-4.0): "; cin >> IPK;
if (IPK < 0 || IPK > 4.0) {
	system("cls");
	cout << "Input IPK tidak valid [" << IPK << "] (0.0-4.0)" << endl;
	goto mulai;
}
cout << "Masukkan Nilai Akhir (0-100): "; cin >> NilaiAkhir;
if (NilaiAkhir < 0 || NilaiAkhir> 100) {
	system("cls");
	cout << "Input nilai akhir tidak valid [" << NilaiAkhir << "] (0-100)" << endl;
	goto mulai;
}

if (aktif == 1) {
	if (kehadiran >= 70 && IPK >= 2.0 && SatuanTugas == 1) {
		if (NilaiAkhir >= 80 && NilaiAkhir <= 100) {
			cout << "____________________________________________________________________________________________" << endl;
			cout << "Lulus -- Grade A -- Dapat Mengikuti Program Berikutnya" << endl;
		} else if (NilaiAkhir >= 70 && NilaiAkhir <= 79) {
			cout << "____________________________________________________________________________________________" << endl;
			cout << "Lulus -- Grade B -- Dapat Mengikuti Program Berikutnya" << endl;
		} else if (NilaiAkhir >= 60 && NilaiAkhir <= 69) {
			cout << "____________________________________________________________________________________________" << endl;
			cout << "Lulus -- Grade C -- Dapat Mengikuti Program Berikutnya" << endl;
		} else if (NilaiAkhir >= 50 && NilaiAkhir <= 59) {
			cout << "____________________________________________________________________________________________" << endl;
			cout << "Lulus -- Grade D -- Dapat Mengikuti Program Berikutnya" << endl;
		} else {
			cout << "____________________________________________________________________________________________" << endl;
			cout << "Lulus -- Grade E -- Dapat Mengikuti Program Berikutnya" << endl;
		}
	} else if (kehadiran < 70 && IPK < 2.0 && SatuanTugas == 0) {
		cout << "____________________________________________________________________________________________" << endl;
		cout << "Tidak Lulus -- kehadiran " << kehadiran << "%, IPK " << IPK << " berada di bawah batas ketentuan dan tugas belum lengkap" << endl;
	} else if (kehadiran < 70 && IPK < 2.0 && SatuanTugas == 1) {
		cout << "____________________________________________________________________________________________" << endl;
		cout << "Tidak Lulus -- kehadiran " << kehadiran << "% dan IPK " << IPK << " berada di bawah batas ketentuan" << endl;
	} else if (kehadiran < 70) {
		cout << "____________________________________________________________________________________________" << endl;
		cout << "Tidak Lulus -- kehadiran " << kehadiran << "%" << " berada di bawah batas ketentuan" << endl;
	} else if (IPK < 2.0) {
		cout << "____________________________________________________________________________________________" << endl;
		cout << "Tidak Lulus -- IPK " << IPK << " berada di bawah batas ketentuan" << endl;
	} else if (SatuanTugas == 0) {
		cout << "____________________________________________________________________________________________" << endl;
		cout << "Tidak Lulus -- satuan tugas tidak lengkap" << endl;
	} else {
		cout << "____________________________________________________________________________________________" << endl;
		cout << "Tidak Valid -- Silahkan cek kembali inputan" << endl;
	}
} else {
	cout << "____________________________________________________________________________________________" << endl;
	cout << "Tidak Lulus -- Status Mahasiswa Nonaktif" << endl;
}
cout << "____________________________________________________________________________________________" << endl;
cout << "Apakah ingin mengulang input? (1/0): "; cin >> ulang;
	if (ulang == 1) {
		system("cls");
		goto mulai;
	}
	return 0;
}
