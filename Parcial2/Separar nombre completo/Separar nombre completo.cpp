#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string nombreCompleto;
    string nombre;
    string apellido;
    bool tieneNumero = false;

    cout << "Ingrese su nombre y apellido: ";
    getline(cin, nombreCompleto);

    for (int i = 0; i < nombreCompleto.length(); i++) {
        if (isdigit(nombreCompleto[i])) {
            tieneNumero = true;
        }
    }

    if (tieneNumero) {
        cout << "Error: El nombre no puede contener numeros." << endl;
    }
    else {

        int espacio = nombreCompleto.find(" ");

        if (espacio == -1) {
            cout << "Error: Debe ingresar nombre y apellido." << endl;
        }
        else {
            nombre = nombreCompleto.substr(0, espacio);
            apellido = nombreCompleto.substr(espacio + 1);

            cout << "Nombre: " << nombre << endl;
            cout << "Apellido: " << apellido << endl;
        }
    }

    return 0;
}