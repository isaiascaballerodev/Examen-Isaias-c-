#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout <<"ISAIAS DEL VALLE" << endl;
    int num1, num2;
    cout << "Introduce el primer número entero: ";
    cin >> num1;
    cout << "Introduce el segundo número entero: ";
    cin >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicación: " << num1 * num2 << endl;
    cout << "División: " << (num2 != 0 ? num1 / static_cast<double>(num2) : NAN) << endl;
    return 0;
}

