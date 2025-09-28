#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    int arr [n];

    cout << "Masukkan elemen-elemen:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort ascending 
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //tampilkan hasil sorting
    cout << "Hasil sorting ascending:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Mencari median
    float median;
    if (n % 2 == 0) {
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        median = arr[n/2];
    }
    cout << "Median: " << median << endl;
    return 0;
}
    