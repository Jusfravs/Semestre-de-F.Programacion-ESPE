#ifndef BUSCARIP2_H_INCLUDED
#define BUSCARIP2_H_INCLUDED
#include <iostream>

using namespace std;

void consultarEp2(string datos[25][1][2], float pagos[25][1][12]) {
    string buscar;
    cout << "¿Qué quiere buscar?" << endl;
    cin >> buscar;

    bool encontrado = false;

    for (int i = 0; i < 25; i++) {
        if (datos[i][0][0] == buscar || datos[i][0][1] == buscar) {
            encontrado = true;
            cout << "Encontrado: " << buscar << endl;

            cout << "Pagos asociados: ";
            for (int z = 0; z < 12; z++) {
                cout << pagos[i][0][z] << " ";
            }
            cout << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "No se encontró el nombre: " << buscar << endl;
    }
}



#endif // BUSCARIP2_H_INCLUDED
