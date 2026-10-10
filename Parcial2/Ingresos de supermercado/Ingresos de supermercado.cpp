#include <iostream>

using namespace std;

int main() {

    double ventas[100];
    double total = 0;

    int tamano = sizeof(ventas) / sizeof(ventas[0]);

    for (int i = 0; i < tamano; i++) {
        cout << "Ingrese la venta del cliente " << i + 1 << ": ";
        cin >> ventas[i];
    }

    for (int i = 0; i < tamano; i++) {
        total += ventas[i];
    }

    cout << "El total de ventas es: " << total << endl;

    return 0;
}