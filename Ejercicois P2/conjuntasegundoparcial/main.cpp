#include <iostream>
#include "crearBP2.h"
#include "mostrarbp2.h"
#include "consultar.h"
using namespace std;

string datos1[25][1][2];
float pagos[25][1][12];
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
        cout << "Ingrese la opci�n que desea realizar" << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "CREAR" << endl;
                crearCp2(datos1);  // Llamada a la funci�n
                crearpagos(pagos);  // Llamada a la funci�n
                break;
            case 2:
                cout << "MOSTRAR" << endl;
                mostrarCp2(datos1);  // Llamada a la funci�n
                mostrarCp2pagos(pagos);  // Llamada a la funci�n
                break;
            case 3:
                cout << "CALCULAR" << endl;
                break;
            case 4:
                cout << "BUSCAR" << endl;
                consultarCp2(datos1, pagos);  // Llamada a la funci�n
                break;
            case 5:
                cout << "5.- Salir" << endl;
                break;
            default:
                cout << "ERROR INGRESE UNA SOLUCI�N VALIDA" << endl;
        }
    } while (opcion != 5);
    return 0;
}

