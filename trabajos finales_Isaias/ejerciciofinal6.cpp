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

    cout << "Introduce el número de referencia: ";
    cin >> referencia;

    cout << "Introduce 5 números:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    if (todosMayores(numeros, referencia, 5)) {
        cout << "Todos los números son mayores que " << referencia << "." << endl;
    } else {
        cout << "No todos los números son mayores que " << referencia << "." << endl;
    }
    return 0;
}
