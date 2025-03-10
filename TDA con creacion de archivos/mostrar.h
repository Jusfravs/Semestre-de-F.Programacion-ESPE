#ifndef MOSTRAR_H_INCLUDED
#define MOSTRAR_H_INCLUDED
#include <iostream>
#include<fstream>
#include<vector>
using namespace std;

void mostrartxt(){
ifstream datos("proyecto.txt");
string leerlinea;
while(getline(datos,leerlinea)){
    cout <<leerlinea<<endl;
    datos.close();
}
}
#endif // MOSTRAR_H_INCLUDED
