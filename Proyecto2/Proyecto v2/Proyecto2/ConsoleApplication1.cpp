#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX = 100;

struct Alumno { string nombre;string matricula;float calif[3];int grupo;};
struct Maestro { string nombre;string materia;};
struct Grupo {string nombre;string carrera;};
float promedio(const Alumno& alumno) {
    return (alumno.calif[0] + alumno.calif[1] + alumno.calif[2]) / 3;
}

int main() {
    Alumno alumnos[MAX];
    Maestro maestros[MAX];
    Grupo grupos[MAX];

    int cantidadAlumnos = 0, cantidadMaestro = 0, cantidadGrupos = 0;
    int opcion, cantidad;
    do {
        cout << "1. Capturar alumnos\n";
        cout << "2. Capturar grupos y carreras\n";
        cout << "3. Capturar maestros\n";
        cout << "4. Mostrar reportes\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            if (cantidadGrupos == 0) {
                cout << "Primero registra los grupos.\n";
                break;
            }
            cout << "Cuantos alumnos agregaras? ";
            cin >> cantidad;
            if (cantidad < 1 || cantidad > MAX - cantidadAlumnos) {
                cout << "Cantidad invalida. Espacios disponibles: "
                    << MAX - cantidadAlumnos << "\n";
                break;
            }
            for (int i = 0; i < cantidad; i++) {
                Alumno& alumno = alumnos[cantidadAlumnos];
                cout << "\nAlumno " << cantidadAlumnos + 1 << "\n";
                cout << "Nombre: ";
                getline(cin >> ws, alumno.nombre);
                cout << "Matricula: ";
                getline(cin >> ws, alumno.matricula);

                for (int j = 0; j < 3; j++) {
                    do {
                        cout << "Calificacion " << j + 1 << " (0-10): ";
                        cin >> alumno.calif[j];
                    } while (alumno.calif[j] < 0 || alumno.calif[j] > 10);
                }
                for (int j = 0; j < cantidadGrupos; j++) {
                    cout << j + 1 << ". " << grupos[j].nombre
                        << " - " << grupos[j].carrera << "\n";
                }
                do {
                    cout << "Numero de grupo: ";
                    cin >> alumno.grupo;
                } while (alumno.grupo < 1 || alumno.grupo > cantidadGrupos);

                alumno.grupo--;
                cantidadAlumnos++;
            }
            break;

        case 2:
            cout << "Cuantos grupos agregaras? ";
            cin >> cantidad;
            if (cantidad < 1 || cantidad > MAX - cantidadGrupos) {
                cout << "Cantidad invalida. Espacios disponibles: "
                    << MAX - cantidadGrupos << "\n";
                break;
            }
            for (int i = 0; i < cantidad; i++) {
                cout << "\nNombre del grupo: ";
                getline(cin >> ws, grupos[cantidadGrupos].nombre);
                cout << "Carrera: ";
                getline(cin >> ws, grupos[cantidadGrupos].carrera);
                cantidadGrupos++;
            }
            break;

        case 3:
            cout << "Cuantos maestros agregaras? ";
            cin >> cantidad;
            if (cantidad < 1 || cantidad > MAX - cantidadMaestro) {
                cout << "Cantidad invalida. Espacios disponibles: "
                    << MAX - cantidadMaestro << "\n";
                break;
            }

            for (int i = 0; i < cantidad; i++) {
                cout << "\nNombre del maestro: ";
                getline(cin >> ws, maestros[cantidadMaestro].nombre);

                cout << "Materia: ";
                getline(cin >> ws, maestros[cantidadMaestro].materia);

                cantidadMaestro++;
            }
            break;

        case 4: {

            if (cantidadAlumnos == 0) {
                cout << "No hay alumnos registrados.\n";
                break;
            }
            cout << "\n PROMEDIO DE CADA ALUMNO \n";
            for (int i = 0; i < cantidadAlumnos; i++) {
                cout << "Alumno: " << alumnos[i].nombre << "\n";
                cout << "Matricula: " << alumnos[i].matricula << "\n";
                cout << "Promedio: " << promedio(alumnos[i]) << "\n\n";
            }

            cout << "\n MEJOR ALUMNO POR GRUPO \n";

            for (int g = 0; g < cantidadGrupos; g++) {

                float mejorPromedio = 0;
                int indiceMejor = 0;
                bool encontrado = false;

                for (int i = 0; i < cantidadAlumnos; i++) {

                    if (alumnos[i].grupo == g) {

                        float promedioActual = promedio(alumnos[i]);

                        if (encontrado == false || promedioActual > mejorPromedio) {
                            mejorPromedio = promedioActual;
                            indiceMejor = i;
                            encontrado = true;
                        }
                    }
                }
                cout << "Grupo: " << grupos[g].nombre << "\n";
                if (encontrado == true) {
                    cout << "Mejor alumno: " << alumnos[indiceMejor].nombre << "\n";
                    cout << "Promedio: " << mejorPromedio << "\n";
                }
                else {
                    cout << "No hay alumnos en este grupo.\n";
                }
                cout << endl;
            }
            cout << "\n ALUMNOS POR CARRERA \n";
            for (int g = 0; g < cantidadGrupos; g++) {
                bool carreraRepetida = false;

                for (int j = 0; j < g; j++) {
                    if (grupos[g].carrera == grupos[j].carrera) {
                        carreraRepetida = true;
                    }
                }

                if (carreraRepetida == false) {

                    int totalAlumnos = 0;

                    for (int i = 0; i < cantidadAlumnos; i++) {

                        int grupoAlumno = alumnos[i].grupo;

                        if (grupos[grupoAlumno].carrera == grupos[g].carrera) {
                            totalAlumnos++;
                        }
                    }

                    cout << grupos[g].carrera << ": "
                        << totalAlumnos << " alumnos\n";
                }
            }

            break;
        }

        case 5:
            cout << "Programa finalizado.\n";
            break;

        default:
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 5);

    return 0;
}