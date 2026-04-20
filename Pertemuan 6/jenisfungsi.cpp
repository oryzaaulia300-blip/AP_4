#include <iostream>
using namespace std;

// fungsi tanpa nilai balikan
void pesan() {
    cout << "=====Welcome Genii O'Four'=====" << endl;
}

// fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

int kali(int a, int b) {
    return a * b;
}

// fungsi overload
int kali(int a, int b, int c) {
    return a * b * c;
}

float kali(float a, float b) {
    return a * b;
}

// fungsi rekursif
long faktorial(int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * faktorial(x - 1);
    }
}

int main() {
    system("cls");
    int x = 7, y = 3, z = 2;

    // fungsi void
    pesan();

    int hasilTambah = tambah(x, y);
    cout << "Hasil tambah = " << hasilTambah << endl;

    cout << "Tambah langsung = " << tambah(x, y) << endl;

    // fungsi overload
    int hasilKali = kali(x, y);
    cout << "Hasil kali (int 2) = " << hasilKali << endl;

    int hasilKali3 = kali(x, y, z);
    cout << "Hasil kali (int 3) = " << hasilKali3 << endl;

    float hasilkaliFloat = kali(2.5f,3.1f);
    cout <<"Hasil kali pecahan = " << hasilkaliFloat << endl;

    //fungsi rekursif
    int faktor = faktorial(x);
    cout << "Faktorial x = " << faktor << endl;
    
}