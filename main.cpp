#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char ope;
    float a, b;
    cout << "| + = penjumlahan | - = pengurangan | * = Perkalian | / = Pembagian |" << endl;
    cout << "Masukkan Operator (+, -, *, /): ";
    cin >> ope;
    cout << "Masukkan Nomor Pertama: " << endl;
    cin >> a;
    cout << "Masukkan Nomor Kedua" << endl;
    cin >> b;

    switch (ope) {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl << endl << "Script by: MagmaZ3637 | Zidan Alfa Permana";
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl << endl << "Script by: MagmaZ3637 | Zidan Alfa Permana";
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl << endl << "Script by: MagmaZ3637 | Zidan Alfa Permana";
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b << endl << endl << "Script by: MagmaZ3637 | Zidan Alfa Permana";
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Masukkan operator yang benar lah" << endl << endl << "Script by: MagmaZ3637 | Zidan Alfa Permana";
            break;
    }
    return 0;
}

