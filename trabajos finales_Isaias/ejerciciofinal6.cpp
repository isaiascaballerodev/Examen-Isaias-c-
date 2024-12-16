#include <iostream>
using namespace std;

bool todosMayores(int numeros[], int referencia, int tamano) {
    for (int i = 0; i < tamano; i++) {
        if (numeros[i] <= referencia) {
            return false;
        }
    }
    return true;
}

int main() {
    int numeros[5], referencia;

    cout << "Introduce el n�mero de referencia: ";
    cin >> referencia;

    cout << "Introduce 5 n�meros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    if (todosMayores(numeros, referencia, 5)) {
        cout << "Todos los n�meros son mayores que " << referencia << "." << endl;
    } else {
        cout << "No todos los n�meros son mayores que " << referencia << "." << endl;
    }
    return 0;
}
