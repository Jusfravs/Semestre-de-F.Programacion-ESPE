#include <iostream>
#include <string>

using namespace std;

void IngresoDatos(string &nombre, string &apellido,int &cedula,char &sexo,float &fechadenacimiento);
void mostrarDatos(string &nombre, string &apellido,int &cedula,char &sexo,float &fechadenacimiento);
int resta (int dia,int mes,int anon);

int main()
{
    string nombre,apellido;
    int cedula;
    char sexo;
    float fechadenacimiento;
     int dia,mes,anuon;
    IngresoDatos(nombre,apellido,cedula,sexo,fechadenacimiento);
    mostrarDatos(nombre,apellido,cedula,sexo,fechadenacimiento);
    resta(fechadenacimiento,fechaactual);
    return 0;
}
void IngresoDatos(string &nombre, string &apellido,int &cedula,char &sexo,float &fechadenacimiento)
{
    cout<<"ingresar tus dos nombres:"<<endl;
    getline(cin ,nombre);
    cout<<"ingresar tus dos apellidos:"<<endl;
    getline(cin ,apellido);
    cout<<"ingresar numero de cedula:"<<endl;
    cin>>cedula;
    cout<<"ingresar tipo de sexo:"<<endl;
    cin>>sexo;
    cout<<"ingresar fecha de nacimiento:"<<endl;
    cin>>fechadenacimiento;
}
void mostrarDatos(string &nombre, string &apellido,int &cedula,char &sexo,float &fechadenacimiento)
{
    cout<<"-------------------Cedula de Indentidad-------------------"<<endl;
cout<<"----------------------------------------------------------"<<endl;
cout<<"-------------------Nombres-------------------"<<endl;
cout<<"                                             "<<nombre<<endl;

cout<<"-------------------Apellidos-------------------"<<endl;
cout<<"                                             "<<apellido<<endl;

cout<<"-------------------Cedula-------------------"<<endl;
cout<<"                                             "<<cedula<<endl;

cout<<"-------------------Sexo-------------------"<<endl;
cout<<"                                             "<<sexo<<endl;

cout<<"-------------------Fecha de Nacimiento-------------------"<<endl;
cout<<"                                           "<<fechadenacimiento<<endl;

}
int resta (int dia,int mes,int anon)
{
    cout<<"ingresa el dia"<<endl;
    cin>> dia;
    cout<<"ingresa el mes"<<endl;
    cin>> mes;
     cout<<"ingresa el anon"<<endl;
    cin>> anon;


}




