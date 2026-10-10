#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    string matricula;
    double calificaciones[3];
};

int main() {

    Alumno alumnos[5];

    for (int i = 0; i < 5; i++) {

        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        getline(cin >> ws, alumnos[i].nombre);

        cout << "Ingrese la matricula: ";
        cin >> alumnos[i].matricula;

        for (int j = 0; j < 3; j++) {
            cout << "Ingrese la calificacion " << j + 1 << ": ";
            cin >> alumnos[i].calificaciones[j];
        }

        cout << endl;
    }

    for (int i = 0; i < 5; i++) {

        double suma = 0;

        for (int j = 0; j < 3; j++) {
            suma += alumnos[i].calificaciones[j];
        }

        double promedio = suma / 3;

        cout << "Alumno: " << alumnos[i].nombre << endl;
        cout << "Matricula: " << alumnos[i].matricula << endl;
        cout << "Promedio: " << promedio << endl;
        cout << endl;
    }

    return 0;
}