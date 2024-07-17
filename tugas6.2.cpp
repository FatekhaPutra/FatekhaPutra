#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan banyak data: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string nama;
        int jamKerja;
        const int honorPerHari = 50000;
        const int honorLemburPerJam = 5000;
        cout << "Masukkan nama pegawai: ";
        cin.ignore();
        getline(cin, nama);
        cout << "Masukkan jumlah jam kerja: ";
        cin >> jamKerja;
        int honorHarian = honorPerHari;
        int honorLembur = 0;
        if (jamKerja > 8) {
            int kelebihanJam = jamKerja - 8;
            honorLembur = kelebihanJam * honorLemburPerJam;
        }

        int totalHonor = honorHarian + honorLembur;
        cout << "\n===== Hasil Perhitungan Honor Pegawai =====\n";
        cout << "Nama Pegawai: " << nama << endl;
        cout << "Honor Harian : Rp. " << honorHarian << endl;
        cout << "Honor Lembur : Rp. " << honorLembur << endl;
        cout << "Total Honor   : Rp. " << totalHonor << endl << endl;
    }

    return 0;
}
