#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    cout << "Introduce 5 números:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Números en orden inverso:" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
