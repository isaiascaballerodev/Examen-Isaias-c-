#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    cout << "Introduce 5 n�meros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "N�meros en orden inverso:" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
