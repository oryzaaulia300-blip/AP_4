// operator
//1 + 2 angka disebut operand dan simbol disebut operator
//unary 1 operand -,!,~
//binary 2 operand +,-,*,/
//ternary 3 operand ?:
//Jenis operator assignment 
//operator arithmetic fungsinya untuk melakukan operasi matematika +,-,*,/ 
//operatorlogical fungsinya untuk melakukan operasi logika &&, ||, !
//operator bitwise fungsinya untuk melakukan operasi bitwise & | ^ ~ << >>
//operator relational fungsinya untuk membandingkan nilai >, <, >=, <=, ==, !=
// operator increment fungsinya untuk menambah nilai variabel ++
// decrement operator fungsinya untuk mengurangi nilai variabel --
// operator assignment fungsinya untuk memberikan nilai pada variabel =, +=, -=, *=, /=, %=

#include <iostream>
using namespace std;

int main(){
    system ("cls");
    
    int a;
    int b;

    //assignment operator
    a = 5;
    b = 7;

    //arithmetic operator
    int tambah = a + b;
    int kurang = a - b;
    int kali  = a * b;
    int bagi = a / b;
    float bagi2 = a / b;
    int mod = a % b;

    // cout <<"Hasil tambah : " << tambah << endl;
    // cout <<"Hasil kurang : " << kurang << endl;
    // cout <<"Hasil kali : " << kali << endl;
    // cout <<"Hasil bagi (bulat) : " << bagi << endl;
    // cout <<"Hasil tambah (desimal atau pecahan) : " << bagi2 << endl;
    // cout <<"Hasil modulo : " << mod << endl;
    
    //relational operator 
    //membandingkan kedua nilai dengan operator 
    // Jika benar akan memberikan output 1 dan 0 jika salah
    // cout << (a == b) << endl;
    // cout << (a > b) << endl;
    // cout << (a >= b) << endl;
    // cout << (a < b) << endl;
    // cout << (a <= b) << endl;
    // cout << (a != b) << endl;


    //Logical operator
    //And (&&)
    // cout << (true && true) << endl;
    // cout << (true && false) << endl;
    // cout << (false && true) << endl;
    // cout << (false && false) << endl;

    // //or (||)
    // cout << (true || true) << endl;
    // cout << (true || false) << endl;
    // cout << (false || true) << endl;
    // cout << (false || false) << endl;
    
    // // Negasi (!)
    // cout << !true << endl;
    // cout << !false  << endl;

    // // Bitwise operator 
    // cout << (5 & 7) << endl;
    // cout << (5 | 7) << endl;
    // cout << (5 ^ 7) << endl;
    // cout << ( ~7) << endl;
    // cout << (7 << 2) << endl;
    // cout << (7 >> 2) << endl;

    //Shorthand
    // a += 2; // a = a+2 = 7
    // cout << a << endl;

    // a -= 2;
    // cout << a << endl;

    // a *=2;
    // cout << a << endl;

    // a /=2;
    // cout << a << endl;

    //increment dan dicrement
    // pre increment
    // cout << a << endl;
    // cout << ++a << endl;
    // cout << a << endl;

    // //pre decrement
    // cout << a << endl;
    // cout << --a << endl;
    // cout << a << endl;

    // //post increment
    // cout << a << endl;
    // cout << a++ << endl;
    // cout << a << endl;

    // //post decrement
    // cout << a << endl;
    // cout << a-- << endl;
    // cout << a << endl;

    
    
    
    


}
