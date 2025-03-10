#include <iostream>
#include <fstream>
#include"C:\Users\USER\Desktop\programacion\prueba parcial 3\EAP3BUSQUEDA POR CODIGO.h"
#include"C:\Users\USER\Desktop\programacion\prueba parcial 3\EAP3MOSTRAR.h"
#include "C:\Users\USER\Desktop\programacion\prueba parcial 3\EAP3BUSQUEDA POR CODIGO.h"
#include "C:\Users\USER\Desktop\programacion\prueba parcial 3\EAP3 GUARDAR.h"
using namespace std;

int main()
{

    int opcion;
    vector<EIP3EP3> notas;
    do {

        cout << "------------MENU ------------------" << endl;
        cout << "1. CREAR " << endl;
        cout << "2. MOSTRAR " << endl;
        cout << "3. BUSCAR POR CODIGO " << endl;
        cout << "4. SALIR" << endl;
        cout << "INGRESE LA OPCION DESEADA: " << endl;
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                crearIS(notas);
                break;
            case 2:
                mostrarIS(notas));
                break;
            case 3:
                buscarPorCodigoIS(notas,codigo);
                break;
            case 4: {
                GuardarIS.TXT(notas);

                break;
            }
            case 5:
                cout << "SALIENDO..." << endl;
                break;
            default:
                cout << "OPCION NO VALIDA. INGRESE UN VALOR VALIDO." << endl;
        }
    } while (opcion != 5);

    return 0;
}

