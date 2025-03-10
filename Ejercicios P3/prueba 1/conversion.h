#ifndef CONVERSION_H_INCLUDED
#define CONVERSION_H_INCLUDED
#include<iostream>
using namespace std;

void convertir(){

string numero1,numero2;
int suma;
float division;
cout<<"ingresar numero1"<<endl;
cin>>numero1;
cout<<"ingresar numero2"<<endl;
cin>>numero2;
suma=stoi (numero1)+stoi (numero2);
division=stof(numero1)+stof (numero2);
cout<<"el valor de la suma es: "<<suma<<endl;
cout<<"el valor de la division es :"<<division<<endl;


}


#endif // CONVERSION_H_INCLUDED
