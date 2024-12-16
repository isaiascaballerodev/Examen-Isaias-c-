#include <iostream>
using namespace std;

int main() {
    int matriz1[2][2], matriz2[2][2], resultado[2][2] = {0};

    cout << "Introduce los elementos de la primera matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Introduce los elementos de la segunda matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Multiplicación de matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Mostrar resultado
    cout << "El resultado de la multiplicación de las matrices es:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
