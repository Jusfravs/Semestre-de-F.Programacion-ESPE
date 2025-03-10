#ifndef MOSTRAR_H_INCLUDED
#define MOSTRAR_H_INCLUDED
#include <iostream>
#include<vector>
using namespace std;


void mostrar(vector<casa> conjunto){

for (int i=0;i<conjunto.size();i++){

    cout<<"ingrese el nombre del dueno"<< ": "<< conjunto[i].dueno<<endl;
    cout<<"ingrese el numero de personas"<< ": "<< conjunto[i].numerodepersonas<<endl;
    cout<<"ingrese el valor"<< ": "<< conjunto[i].valor<<endl;

#endif // MOSTRAR_H_INCLUDED
