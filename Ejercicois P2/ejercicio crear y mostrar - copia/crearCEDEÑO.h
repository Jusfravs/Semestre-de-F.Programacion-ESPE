#ifndef CREARCEDEÑO_H_INCLUDED
#define CREARCEDEÑO_H_INCLUDED

#include <iostream>
using namespace std;

void crearJus(string &nombre,string &apellido,int &edad)
{

    cout<<"ingresar nombre"<<endl;
    getline(cin, nombre);
    cout<<"ingresar apellido"<<endl;
    getline(cin, apellido);
    cout<<"ingresar edad"<<endl;
    cin >>edad;
}



#endif // CREARINLAGO_H_INCLUDED
