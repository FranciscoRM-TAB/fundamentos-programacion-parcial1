#include <iostream>

using namespace std;

int main() {

    int alumnos = 10;
    int columnas = 3;

    double matriz[10][3];

    for (int i = 0; i < alumnos; i++) {

        cout << "Ingrese el promedio del alumno " << i + 1 << " del grupo A: ";
        cin >> matriz[i][0];

        cout << "Ingrese el promedio del alumno " << i + 1 << " del grupo B: ";
        cin >> matriz[i][1];

        if (matriz[i][0] > matriz[i][1]) {
            matriz[i][2] = matriz[i][0];
        }
        else {
            matriz[i][2] = matriz[i][1];
        }
    }

    cout << "\nGrupo A\tGrupo B\tMayor" << endl;

    for (int i = 0; i < alumnos; i++) {
        cout << matriz[i][0] << "\t" << matriz[i][1] << "\t" << matriz[i][2] << endl;
    }

    return 0;
}