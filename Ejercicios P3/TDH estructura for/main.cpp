#include <iostream>

using namespace std;
struct personas
{
string nombre,apellido;
int edad;
float estatura,peso;
char sexo;
};

int main()
{
int numerodeestudiantes;
    cout<<"Ingrese el numero de personas"<<endl;
    cin>>numerodeestudiantes;
    personas estudiantes[numerodeestudiantes];

    for (int i=0;i<numerodeestudiantes;i++){

        cout<<"Ingrese el nombre"<<endl;
        cin>>estudiantes[i].nombre;
        cout<<"Ingrese el apellido"<<endl;
        cin>>estudiantes[i].apellido;
        cout<<"Ingrese su edad"<<endl;
        cin>>estudiantes[i].edad;
        cout<<"Ingrese su peso"<<endl;
        cin>>estudiantes[i].peso;
        cout<<"Ingrese su estatura"<<endl;
        cin>>estudiantes[i].estatura;
        cout<<"Ingrese su sexo"<<endl;
        cin>>estudiantes[i].sexo;
    }
    for (int i=0;i<numerodeestudiantes;i++){

        cout<<"Nombre: "<<estudiantes[i].nombre<<endl;
        cout<<"Apellido: "<<estudiantes[i].apellido<<endl;
        cout<<"Edad: "<<estudiantes[i].edad<<endl;
        cout<<"Peso: "<<estudiantes[i].peso<<endl;
        cout<<"Estatura: "<<estudiantes[i].estatura<<endl;
        cout<<"Sexo: "<<estudiantes[i].sexo<<endl;
    }
    return 0;
}


