#ifndef COMPARACION_H_INCLUDED
#define COMPARACION_H_INCLUDED
#include<iostream>
using namespace std;

void comparar(){

string palabra1,palabra2;
    cout<<"ingrese la palabra 1"<<endl;
    cin>>palabra1;
    cout<<"ingrese la palabra 2"<<endl;
    cin>>palabra2;
if (palabra1==palabra2){
    cout<<"coinciden"<<endl;
}
else{
    cout<<"son diferentes"<<endl;
}
}


#endif // COMPARACION_H_INCLUDED
