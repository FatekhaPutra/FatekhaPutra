#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
char nilaiHuruf(double nilai) {
    if (nilai >= 80) {
        return 'A';
    } else if (nilai >= 70) {
        return 'B';
    } else if (nilai >= 56) {
        return 'C';
    } else if (nilai >= 47) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    int banyakData;
    cout << "Masukkan banyak data yang ingin diproses: ";
    cin >> banyakData;

    vector<double> nilaiUAS(banyakData);
    vector<double> nilaiUTS(banyakData);
    vector<double> nilaiHasil(banyakData);

    for (int i = 0; i < banyakData; ++i) {
        cout << "Masukkan nilai UTS dan UAS untuk data ke-" << i + 1 << " (pisahkan dengan spasi): ";
        cin >> nilaiUTS[i] >> nilaiUAS[i];

        nilaiHasil[i] = (nilaiUAS[i] * 0.4) + (nilaiUTS[i] * 0.6);
    }

    cout << "\n=================================================================\n";
    cout << setw(5) << "No" << setw(12) << "Nilai UTS" << setw(12) << "Nilai UAS" << setw(12) << "Nilai Hasil" << setw(12) << "Nilai Huruf" << endl;
    cout << "=================================================================\n";

    for (int i = 0; i < banyakData; ++i) {
        char huruf = nilaiHuruf(nilaiHasil[i]);
        cout << setw(5) << i + 1 << setw(12) << nilaiUTS[i] << setw(12) << nilaiUAS[i] << setw(12) << fixed << setprecision(2) << nilaiHasil[i] << setw(12) << huruf << endl;
    }

    cout << "=================================================================\n";

    return 0;
}
