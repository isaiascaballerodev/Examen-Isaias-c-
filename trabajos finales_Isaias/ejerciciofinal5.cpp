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

    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;
    cout << "Introduce el tercer número: ";
    cin >> num3;

    if (enOrdenAscendente(num1, num2, num3)) {
        cout << "Los números están en orden ascendente." << endl;
    } else if (enOrdenDescendente(num1, num2, num3)) {
        cout << "Los números están en orden descendente." << endl;
    } else {
        cout << "Los números están desordenados." << endl;
    }
    return 0;
}
