#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;

    cout << "Antes del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;
    intercambiar(num1, num2);
    cout << "Después del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}
