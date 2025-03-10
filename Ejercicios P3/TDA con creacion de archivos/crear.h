#ifndef CREAR_H_INCLUDED
#define CREAR_H_INCLUDED
#include <iostream>
#include<fstream>
#include<vector>
using namespace std;
struct pagos {
    string nombre,meses;
    int cuenta;
    float pagos;
    };

void crear(vector <pagos> &usuario){
pagos info;
ofstream datos("proyecto.txt",ios::app);
for(int i=0;i<2;i++){
    cout<<"ingrese el nombre"<<endl;
    cin>>info.nombre;
    cout<<"ingrese los meses"<<endl;
    cin>>info.meses;
    cout<<"ingrese la cuenta"<<endl;
    cin>>info.cuenta;
    cout<<"ingrese los pagos"<<endl;
    cin>>info.pagos;
    usuario.push_back(info);
    datos<<"el nombre es: "<<info.nombre;
    datos<<" Los meses son: "<<info.meses;
    datos<<"La cuenta es: "<<info.cuenta;
    datos<<"Loa pagos son: "<<info.pagos;


}
}


#endif // CREAR_H_INCLUDED
