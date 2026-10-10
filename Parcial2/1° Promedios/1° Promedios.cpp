#include <iostream>

using namespace std;

int main() {

	double promedio;
	double suma = 0;
	double calificaciones[6];
	int tamano = sizeof(calificaciones) / sizeof(calificaciones[0]); //Por si en un futuro se pide por ejemplo otra calificacion, con esto 
																	// ya no seria necesario cambiar el tamaño del arreglo en cada for

	for (int i = 0; i < tamano-1; i++) {
		cout << "Ingrese la calificacion " << i + 1 << ": ";
		cin >> calificaciones[i];
	}
	for (int i = 0; i < tamano-1; i++) {
		suma += calificaciones[i];
	}
	promedio = suma / (tamano - 1);
	calificaciones[tamano - 1] = promedio;
	cout << "El promedio del alumno es : " << promedio << endl;
	cout << "Las calificaciones del alumno son: " << endl;

	for (int i = 0; i < tamano-1; i++) {
		cout << i + 1 << ": " << calificaciones[i] << endl;
	}
	return 0;
}