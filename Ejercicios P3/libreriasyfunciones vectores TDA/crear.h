#ifndef CREAR_H_INCLUDED
#define CREAR_H_INCLUDED
#include <iostream>
#include<vector>
using namespace std;

struct casa{
string dueno;
int numerodepersonas;
float valor;
};

void crear(vector<casa>&conjunto){
casa vivienda;
for (int i=0;i<20;i++){

    cout<<"ingrese el nombre del dueno"<<endl;
    cin>>vivienda.dueno;
    cout<<"ingrese el numero de personas"<<endl;
    cin>>vivienda.numerodepersonas;
    cout<<"ingrese el valor"<<endl;
    cin>>vivienda.valor;
    conjunto.push_back(vivienda);

}


}
#endif // CREAR_H_INCLUDED
