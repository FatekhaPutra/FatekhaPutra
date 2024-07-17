#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan tinggi segitiga siku: ";
    cin >> n;

    int current_genap = 2;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << current_genap << " ";
            sum += current_genap;
            current_genap += 2;
        }
        cout << endl;
    }

    cout << "Penjumlahan deret bilangan genap: " << sum << endl;

    return 0;
}
