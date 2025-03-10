#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//*
int main()
{
    /*
    string frase1,frase2,completo;
    string frase;
    frase1 ="hola";
    frase1="fundamentos de programcion";
    cout << "escribe la frase" << endl;
    getline(cin, frase);
    cout<<"las frases son:"<<frase1<<" " <<frase<<endl;
    completo = frase1+frase2;
    cout<<completo;
    string nueva_frase;
    nueva_frase=frase1;
    cout<<"la nueva frase es:"<<" "<< nueva_frase<<endl;

    // longitud de una frase
    int cantidades;
    cantidades=nueva_frase.length();
    cout<<"la longitud es :"<< cantidades<<endl;
    // concatenacion
    string resultado_concatenacion;
    resultado_concatenacion= frase1 + frase2+" gracias ";
    cout<<"el resuntado de la concatenacion es:"<< resultado_concatenacion << endl;
    */
    //ejercio
    string nombre1,nombre2,apellido1,apellido2;
    cout<<"ingrese el primer nombre"<<endl;
    cin>>nombre1;
    cout<<"ingrese el segundo nombre"<<endl;
    cin>>nombre2;
    cout<<"ingrese el primer apellido"<<endl;
    cin>>apellido1;
    cout<<"ingrese el segundo apellido"<<endl;
    cin>>apellido2;
    string nombres_y_apellidos;
    nombres_y_apellidos=nombre1+" "+nombre2+" "+apellido1+" "+apellido2;
    cout<<"Sus nombres son : "<< nombres_y_apellidos << endl;
    cout<<"La longitud es : " << nombres_y_apellidos.length () << endl;

    //comparacion

    string apellidos;
    cout<<"ingrese los apellidos a comparar : "<<endl;
    cin.ignore();
    getline (cin,apellidos);

    if(apellidos==nombres_y_apellidos )
    {
        cout<<"son iguales"<<endl;

    }
    else
    {
        cout<<" No son iguales"<<endl;

    }

    //convercion a mayusculas

      transform(nombres_y_apellidos.begin(),nombres_y_apellidos.end(),nombres_y_apellidos.begin(),::toupper);

      cout<< "el nombre es mayusculas es: "<<nombres_y_apellidos <<endl;

      // conversion a minusculas

       transform(nombres_y_apellidos.begin(),nombres_y_apellidos.end(),nombres_y_apellidos.begin(),::tolower);

      cout<< "el nombre es minusculas es: "<<nombres_y_apellidos <<endl;

      // invertir
      reverse (nombres_y_apellidos.begin(),nombres_y_apellidos.end());
      cout<<" el nombre en reversa es: "<< nombres_y_apellidos << endl;
      // reveerso x2
      reverse (nombres_y_apellidos.begin(),nombres_y_apellidos.end());
      cout<<" el nombre en reversa es: "<< nombres_y_apellidos << endl;

      // extraccion
       nombres_y_apellidos.substr (0,4);
       string apellido_extra=nombres_y_apellidos.substr(0,4);
       cout<< "apellido: "<< apellido_extra<<endl;
       // busqueda
       string buscar;
       cout<<"ingresa la palabra que quieres buscar: " <<endl;
       cin >>buscar;
       if(nombres_y_apellidos.find(buscar)!=string::npos)
        {
        cout <<"se encontro : "<<buscar<<endl;
       }
       else{
        cout<<" no se encontro: "<< endl;
       }


    return 0;
}
