#include <iostream>
#include "crearIP2.h"
#include "mostrarIP2.h"
#include "buscarIP2.h"
using namespace std;

string datos1[25][1][2];
float pagos[25][1][12];
void mostrarEp2 (string datos1 [25][1][2]);
void calcularEp2pagos (float pagos [25][1][12]);
void consultarEp2(string datos[25][1][2], float pagos[25][1][12]);
void crearEp2 (string datos1 [25][1][2]);


int opcion;

int main() {
    do {
        cout << "*********MENU*********" << endl;
        cout << "1.- Crear" << endl;
        cout << "2.- Mostrar" << endl;
        cout << "3.- Calcular" << endl;
        cout << "4.- Buscar" << endl;
        cout << "5.- Salir" << endl;
        cout << "*********MENU*********" << endl;
        cout << "Ingrese la opción que desea realizar" << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "CREAR" << endl;
                crearEp2(datos1);
                crearpagos(pagos);
                break;
            case 2:
                cout << "MOSTRAR" << endl;
                mostrarEp2(datos1);
                break;
            case 3:
                cout << "CALCULAR" << endl;
                break;
            case 4:
                cout << "BUSCAR" << endl;
                consultarEp2(datos1, pagos);
                break;
            case 5:
                cout << "5.- Salir" << endl;
                break;
            default:
                cout << "ERROR INGRESE UNA SOLUCIÓN VALIDA" << endl;
        }
    } while (opcion != 5);
    return 0;
}
