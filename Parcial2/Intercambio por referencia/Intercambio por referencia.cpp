#include <iostream>

using namespace std;

void intercambiar(int& numero1, int& numero2) {

    int temporal = numero1;
    numero1 = numero2;
    numero2 = temporal;
}

int main() {

    int numero1;
    int numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << "Antes del intercambio:" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    intercambiar(numero1, numero2);

    cout << "\nDespues del intercambio:" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    return 0;
}