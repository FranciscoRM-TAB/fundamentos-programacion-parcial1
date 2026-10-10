#include <iostream>

using namespace std;
int main(){

	double grupoA[5];
	double grupoB[5];
	double mayores[5];

	int tamano = sizeof(grupoA) / sizeof(grupoA[0]);


	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese el promedio " << i + 1 << " del grupo A : ";
		cin >> grupoA[i];
	}
	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese el promedio " << i + 1 << " del grupo B :";
		cin >> grupoB[i];
	}
	
	for (int i = 0; i < tamano; i++) {
		if (grupoB[i] < grupoA[i]) {
			mayores[i] = grupoA[i];
		}
		else {
			mayores[i] = grupoB[i];
		}
	}
	for (int i = 0; i < tamano; i++) {
		cout << "El mayor promedio " << i + 1 << " es: " << mayores[i] << endl;
	}

	return 0;
}
