#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout <<"ISAIAS DEL VALLE" << endl;
    int num1, num2;
    cout << "Introduce el primer n�mero entero: ";
    cin >> num1;
    cout << "Introduce el segundo n�mero entero: ";
    cin >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicaci�n: " << num1 * num2 << endl;
    cout << "Divisi�n: " << (num2 != 0 ? num1 / static_cast<double>(num2) : NAN) << endl;
    return 0;
}

