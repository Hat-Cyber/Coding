#include<iostream>
using namespace std;

int main(){

    int a, b, c, d, e, f, g;
    cout << "Menu pilihan\n";
    cout << "1.Tambah\n";
    cout << "2.kurang\n";
    cout << "3.Bagi\n";
    cout << "pilih : ";
    cin >> a;
    if (a == 1) {
        cout << "Masukkan nomor : ";
        cin >> b;
        cout << "Tambahkan dengan : ";
        cin >> c;
        cout << "hasilnya adalah : " << b + c << endl;
        
    }else if (a == 2){
        cout << "Masukkan nomor : ";
        cin >> d;
        cout << "kurangkan dengan : ";
        cin >> e;
        cout << "Hasilnya adalah : " << d - e << endl;
    }else if (a == 3){
        cout << "Masukkan nomor : ";
        cin >> f;
        cout << "bagikan dengan : ";
        cin >> g;
        cout << "Hasilnya adalah : " << f / g << endl;
    }else {
        cout << "Harap pilih yang benar\n";
    
    }
    
    cout << "program selesai\n";
    return 0;
}
