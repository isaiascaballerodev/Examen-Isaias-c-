#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1, num2;

    cout << "Men� de Operaciones Matem�ticas" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicaci�n" << endl;
    cout << "4. Divisi�n" << endl;
    cout << "Selecciona una operaci�n (1-4): ";
    cin >> opcion;

    cout << "Introduce el primer n�mero: ";
    cin >> num1;
    cout << "Introduce el segundo n�mero: ";
    cin >> num2;

    switch (opcion) {
        case 1:
            cout << "Resultado de la suma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado de la resta: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado de la multiplicaci�n: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado de la divisi�n: " << num1 / num2 << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Opci�n inv�lida. Por favor selecciona un n�mero entre 1 y 4." << endl;
    }
    return 0;
}
