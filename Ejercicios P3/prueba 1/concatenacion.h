#ifndef CONCATENACION_H_INCLUDED
#define CONCATENACION_H_INCLUDED
#include<iostream>
using namespace std;
 void concatenacion(){

 string nombre1,nombre2,apellido1,apellido2, nombreyapellido;
 cout<<"ingrese el nombre1"<<endl;
 cin>>nombre1;
cout<<"ingrese el nombre2"<<endl;
 cin>>nombre2;
 cout<<"ingrese el apellido1"<<endl;
 cin>>apellido1;
 cout<<"ingrese el apellido2"<<endl;
 cin>>apellido2;
 nombreyapellido= nombre1 +" "+nombre2 +" "+apellido1 +" "+apellido2;
 cout<<"nombres completos: "<<nombreyapellido<<endl;
 }

#endif // CONCATENACION_H_INCLUDED
