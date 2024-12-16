#include <iostream>
#include <string>

using namespace std;


string desencriptarPalabra(const string& palabraEncriptada, int clave) {
    string palabraDesencriptada = "";
    for (char letra : palabraEncriptada) {

        palabraDesencriptada += char(int(letra) - clave);
    }
    return palabraDesencriptada;
}


int main() {

    string palabraEncriptada;

    cout << "Introduce la palabra encriptada: ";
    cin >> palabraEncriptada;


    for (int clave = 1; clave <= 5; ++clave) {
        string palabraDesencriptada = desencriptarPalabra(palabraEncriptada, clave);
        cout << "Posible palabra desencriptada con clave " << clave << ": " << palabraDesencriptada << endl;
    }
    return 0;
}
