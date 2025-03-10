#include <iostream>
#include "C:\Users\USER\Desktop\programacion\prueba 1\declaracion.h"
#include "C:\Users\USER\Desktop\programacion\prueba 1\longitud.h"
#include"C:\Users\USER\Desktop\programacion\prueba 1\concatenacion.h"
#include "C:\Users\USER\Desktop\programacion\prueba 1\comparacion.h"
#include"C:\Users\USER\Desktop\programacion\prueba 1\conversion.h"
#include "C:\Users\USER\Desktop\programacion\prueba 1\reservar.h"
#include "C:\Users\USER\Desktop\programacion\prueba 1\subcadena.h"
#include"C:\Users\USER\Desktop\programacion\prueba 1\buscar.h"
using namespace std;


void asignacion (string &frase1,string &frase2);
string frase1,frase2,frase3,frase4,frase5,frase6;
void longitud ();
string nombre1,nombre2,apellido1,apellido2, nombreyapellido;
string palabra1,palabra2;
string numero1,numero2;
void buscar();
void subcadena();
void invertir();
void convertir();
void comparar();

int main()
{
    int opcion;
    char C;
    do{
    cout << "****MENU****" << endl;
    cout << "1.declaracion" << endl;
    cout << "2.longitud"<< endl;
    cout << "3.concatenacion"<< endl;
    cout << "4.comparacion"<< endl;
    cout << "5.conversion"<< endl;
    cout << "6.reserva"<< endl;
    cout << "7.subcadena"<< endl;
    cout << "8.buscar"<< endl;
    cout << "****************"<< endl;
        cout << "indica la opcion que desea" << endl;
        cin>> opcion;
        cout<<"**************"<<endl;
        switch (opcion){

    case 1:
        {

        asignacion(frase1);
        break;
        }

         case 2:
        {
        longitud();
        break;
        }

         case 3:
        {
        concatenacion();
         break;
        }

         case 4:
        {
        comparar();
        break;

        }

         case 5:
        {
        convertir();
        break;

        }

         case 6:
        {
        invertir();
        break;

        }

         case 7:
        {
            subcadena();
            break;

        }

         case 8:
        {
            buscar();
            break;

        }
    cout<<"CONTINUAR S/N"<<endl;
      cin>>C;




        }

    }
    while (C=='S');
    return 0;

}
