#include <iostream>
using namespace std;

bool enOrdenAscendente(int a, int b, int c) {
    return a <= b && b <= c;
}

bool enOrdenDescendente(int a, int b, int c) {
    return a >= b && b >= c;
}

int main() {
    int num1, num2, num3;

    cout << "Introduce el primer n�mero: ";
    cin >> num1;
    cout << "Introduce el segundo n�mero: ";
    cin >> num2;
    cout << "Introduce el tercer n�mero: ";
    cin >> num3;

    if (enOrdenAscendente(num1, num2, num3)) {
        cout << "Los n�meros est�n en orden ascendente." << endl;
    } else if (enOrdenDescendente(num1, num2, num3)) {
        cout << "Los n�meros est�n en orden descendente." << endl;
    } else {
        cout << "Los n�meros est�n desordenados." << endl;
    }
    return 0;
}
