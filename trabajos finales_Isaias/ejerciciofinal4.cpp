#include <iostream>
using namespace std;

bool sonIguales(int a, int b) {
    return a == b;
}

bool esMayor(int a, int b) {
    return a > b;
}

int main() {
    int num1, num2;

    cout << "Introduce el primer n�mero: ";
    cin >> num1;
    cout << "Introduce el segundo n�mero: ";
    cin >> num2;

    if (sonIguales(num1, num2)) {
        cout << "Ambos n�meros son iguales." << endl;
    } else if (esMayor(num1, num2)) {
        cout << num1 << " es mayor que " << num2 << endl;
    } else {
        cout << num2 << " es mayor que " << num1 << endl;
    }
    return 0;
}
