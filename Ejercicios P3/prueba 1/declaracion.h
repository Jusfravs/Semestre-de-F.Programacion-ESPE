#ifndef DECLARACION_H_INCLUDED
#define DECLARACION_H_INCLUDED
#include<iostream>
using namespace std;
void asignacion (string &frase1){
 cout<<"Ingrese la frase"<<endl; //salida
 cin.ignore();
 getline(cin,frase1); //entrada
 string frase2;
 frase2= "fundamentos de progrmacion 2025";
 cout<<frase1<<endl;
 cout<<frase2<<endl;

}


#endif // DECLARACION_H_INCLUDED
