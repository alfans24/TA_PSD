#include<iostream>
using namespace std;

int main(){
    string str = "lorem ipsum dolor sit amet consectetur adipiscing elit";
    char target;
    int count = 0;
    cout << "Masukkan huruf yang ingin dihitung: ";
    cin >> target;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == target){
            count++;
        }
    }

    if(count > 0){
        cout << "Huruf '" << target << "' muncul sebanyak " << count << " kali." << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan." << endl;
    }
    return 0;
}