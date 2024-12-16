#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.1416;
    double radio;

    cout << "Introduce el radio del círculo: ";
    cin >> radio;

    double area = PI * pow(radio, 2);
    double circunferencia = 2 * PI * radio;

    cout << "Área: " << area << endl;
    cout << "Circunferencia: " << circunferencia << endl;

    return 0;
}
