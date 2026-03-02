#include <iostream>
using namespace std;

int main (){
    system("cls");
    int x;

    cout << "Masukkan Nilai: "; 
    cin >> x;

    // // if statement
    // if (x > 75) {
    //     cout << "Anda lulus" << endl;
    // }

    // // if else statament
    // if (x > 75){
    //     cout << "Anda lulus" << endl;
    // } else {
    //     cout << "Anda tidak lulus" << endl;
    // }

    // // if else if statement
    // string lampu;
    
    // cout << "Kondisi: ";        
    // getline (cin,lampu);

    // if (lampu == "hijau") {
    //     cout << "Silahkan jalan" << endl;
    // } else if (lampu == "kuning") {
    //     cout << "Berhati-hati" << endl;
    // } else if(lampu == "merah") {
    //     cout << "Berhenti" << endl;
    // } else {
    //     cout << "Nilai invalid" << endl;
    //     return 0;
    // }
 
    // Nested if statement
    // if (x > 75) {
    //     cout << "Anda lulus"<< endl;
    //     if (x == 100 ) {
    //         cout << "Nilai anda sempurna" << endl;
    //     }
    // } else {
    //     cout << "Anda tidak lulus" << endl;
    // }

//    // Switch case statement
//     switch(x) {
//         case 1:
//             cout << "Senin " << endl;
//             break;
//         case 2:
//             cout << "Selasa" << endl;
//             break;
//         case 3:
//             cout << "Rabu" << endl;
//             break;
//         case 4:
//             cout << "Kamis" << endl;
//             break;
//         case 5:
//             cout << "Jumat" << endl;
//             break;
//         default:
//             cout << "Libur" << endl;
//             break;
//     }

    // // switch range
    // switch (x) {
    //         case 85 ... 100: cout << "A" << endl; break;
    //         case 80 ...  84: cout << "B" << endl; break;
    //         case 70 ...  79: cout << "C" << endl; break;
    //         case 20 ...  69: cout << "D" << endl; break;
    //         case 0  ...  19: cout << "E" << endl; break;
    //         default : cout << "Nilai invalid" << endl; break;
    // }

    // Ternary operator
    string cek = (x % 2 == 0) ? "Genap" : "Ganjil";
    cout << x << " itu adalah bilangan " << cek << endl;
}