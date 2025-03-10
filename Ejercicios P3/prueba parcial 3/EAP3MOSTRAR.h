#ifndef EAP3MOSTRAR_H_INCLUDED
#define EAP3MOSTRAR_H_INCLUDED
#include <iostream>
#include <fstream>
using namespace std;

void mostrarIS  (vector <EIP3EP3> & notas )
{
    cout << " LISTADO POR CODIGO " <<endl;
    for (size_t i=0 ;i<notas.size();i++)
    {
    cout << "-------------------------------------";
    cout << " EXPOSICION "<<notas.EXPOSICION[0,10] << endl;
    cout << " LABORATORIO " <<notas.LABORATORIO[0,20] << endl;
    cout << " TES INTERMEDIO " <<notas.TES INTERMEDIO[0,20] << endl;
    cout << " EVALUACION " <<notas.EVALUACION [0,20]<< endl;
    cout << " MAPAS MENTALES " <<notas.MAPAS MENTALES[0,10]<<endl;
    cout << " PROYECTO " <<notas.PROYECTO[0,15]<<endl;
    cout << "-------------------------------------";
    }
}
#endif // EAP3MOSTRAR_H_INCLUDED
