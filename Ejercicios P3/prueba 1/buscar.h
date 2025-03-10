#ifndef BUSCAR_H_INCLUDED
#define BUSCAR_H_INCLUDED
#include<iostream>
using namespace std;
void buscar(){
string frase6,busca;
frase6="hola fundamentos de programacion";
cout<<"ingrese la palabra que quiere buscar"<<endl;
cin>> busca;
if (frase6.find(busca)!=string::npos){
    cout<<"encontado"<<endl;
}
else{
    cout<<"desaparecido"<<endl;
}

}


#endif // BUSCAR_H_INCLUDED
