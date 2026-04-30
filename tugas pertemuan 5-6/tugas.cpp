#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


int generateAngka() {
    return rand() % 20 + 1;
}
char generateOperator() {
    char ops[] = {'+', '-', '*', '%'}; 
    int index = rand() % 4;
    return ops[index];
}
int hitung(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '%': return a % b;
        default: return 0;
    }
}
void tampilHistory(vector<string> history) {
    if (history.empty()) {
        cout << "Belum ada history kuis.\n";
    } else {
       for (int i = 0; i < history.size(); i++) {
        cout << "Sesi " << i + 1 << ": " << history[i] << endl;
        }
    }
}
int main() {
    srand(time(0));
    vector<string> history; 
    int menu;
    
    do {
        cout << "\n===== MENU KUIS =====\n";
        cout << "1. Mulai Kuis Baru\n";
        cout << "2. History Kuis\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> menu;

    if (menu == 1) {

        int jumlahSoal;
        cout << "Masukkan jumlah soal (1-10): ";
         cin >> jumlahSoal;

        if (jumlahSoal < 1 || jumlahSoal > 10) {
        cout << "Jumlah soal tidak valid!\n";
        continue;
        }    

        int benar = 0;

        for (int i = 0; i < jumlahSoal; i++) {
        int a = generateAngka();
        int b = generateAngka();
        char op = generateOperator();

        if (op == '%' && b == 0) {
        b = 1;
    }

        int jawabanBenar = hitung(a, b, op);
        int jawabanUser;

        cout << "Soal " << i + 1 << ": " << a << " " << op << " " << b << " = ";
        cin >> jawabanUser;

        if (jawabanUser == jawabanBenar) {
        cout << "Kok bisa beneer sih?!\n";
        benar++;
        } else {
        cout << "Salah brek!yang bener jawabannya: " << jawabanBenar << endl;
        }
            }
        cout << "\nSkor kamu: " << benar << "/" << jumlahSoal << endl;

    
    string hasil = to_string(benar) + "/" + to_string(jumlahSoal);
    history.push_back(hasil);

        } else if (menu == 2) {
            tampilHistory(history);

        } else if (menu == 3) {
            cout << "Udah selesain ni brek.\n";

        } else {
            cout << "Menu tidak valid!\n";
        }

    } while (menu != 3);
    
    return 0;
}