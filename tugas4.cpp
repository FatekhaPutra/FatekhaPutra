#include <iostream>
using namespace std;

int main() {
    int jumlah = 0;
    int n = 10; // Jumlah bilangan ganjil yang akan dihitung
    int mulai = 1; // Bilangan ganjil pertama

    cout << "Deret bilangan ganjil: ";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << " + ";
        }
        cout << mulai;
        jumlah += mulai;
        mulai += 2; // Naikkan bilangan ganjil ke nilai berikutnya
    }

    cout << " = " << jumlah << endl;
}


