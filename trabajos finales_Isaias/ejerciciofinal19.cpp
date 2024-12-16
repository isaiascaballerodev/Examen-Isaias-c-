#include <iostream>
#include <string>

using namespace std;


string encriptarPalabra(const string& palabra, int clave) {
    string palabraEncriptada = "";
    for (char letra : palabra) {

        palabraEncriptada += char(int(letra) + clave);
    }
    return palabraEncriptada;
}


int main() {

    string palabra;
    int clave;

    cout << "Introduce una palabra para encriptar: ";
    cin >> palabra;

    cout << "Introduce un número de clave (entre 1 y 5): ";
    cin >> clave;


    if (clave < 1 || clave > 5) {
        cout << "La clave debe estar entre 1 y 5" << endl;
        return 1;
    }


    string palabraEncriptada = encriptarPalabra(palabra, clave);


    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
}
