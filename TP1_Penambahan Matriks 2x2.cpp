#include <iostream>
using namespace std;
int main(){
    
    int a[2][2], b[2][2], c[2][2];
    cout << "Masukkan elemen matriks A (2x2):" << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    cout << "Masukkan elemen matriks B (2x2):" << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin >> b[i][j];
        }
    }
    // Penjumlahan matriks
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "Hasil penjumlahan matriks A dan B adalah:" << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}