#include <iostream>
using namespace std;

int main() {
    int opcion;
    double numero;

    do {
        cout << "\nMenú de opciones:" << endl;
        cout << "1. Calcular el cuadrado de un número" << endl;
        cout << "2. Calcular el cubo de un número" << endl;
        cout << "3. Salir" << endl;
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Introduce un número: ";
                cin >> numero;
                cout << "El cuadrado de " << numero << " es " << numero * numero << endl;
                break;
            case 2:
                cout << "Introduce un número: ";
                cin >> numero;
                cout << "El cubo de " << numero << " es " << numero * numero * numero << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, selecciona una opción válida." << endl;
        }
    } while (opcion != 3);

    return 0;
}
