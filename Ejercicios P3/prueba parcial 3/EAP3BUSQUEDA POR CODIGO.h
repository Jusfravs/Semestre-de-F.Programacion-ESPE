#ifndef EAP3BUSQUEDA_POR_CODIGO_H_INCLUDED
#define EAP3BUSQUEDA_POR_CODIGO_H_INCLUDED
#include <iostream>
#include <fstream>
using namespace std;

void buscarPorCodigoIS(vector <EIP3EP3> & notas,  string& codigo) {
    bool encontrado = false;
    cout << " INGRESAR EL CODIGO: " << notas << endl;


    for (size_t i = 0; i < notas.size(); i++) {
        if (codigo[i].notas == codigo) {
            cout << "-------------------------------------" << endl;
    cout << " EXPOSICION "<<notas.EXPOSICION[0,10] << endl;
    cout << " LABORATORIO " <<notas.LABORATORIO[0,20] << endl;
    cout << " TES INTERMEDIO " <<notas.TES INTERMEDIO[0,20] << endl;
    cout << " EVALUACION " <<notas.EVALUACION [0,20]<< endl;
    cout << " MAPAS MENTALES " <<notas.MAPAS MENTALES[0,10]<<endl;
    cout << " PROYECTO " <<notas.PROYECTO[0,15]<<endl;

            for (int j = 0; j < 14; j++) {
                cout << codigo[i].notas[j] << " ";
            }
              cout << endl;
            cout << "-------------------------------------" << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "NO SE ENCONTRO  " << codigo << endl;
    }
}
#endif // EAP3BUSQUEDA_POR_CODIGO_H_INCLUDED
