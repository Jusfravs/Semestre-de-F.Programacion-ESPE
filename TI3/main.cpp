#include <iostream>
#include <algorithm>
#include"C:\Users\USER\Desktop\programacion\TI3\crearTI3EA.h"
#include"C:\Users\USER\Desktop\programacion\TI3\mostarTI3EA.h"
#include"C:\Users\USER\Desktop\programacion\TI3\declaracionTI3EA.h"
#include"C:\Users\USER\Desktop\programacion\TI3\longitudTI3EA.h"
#include"C:\Users\USER\Desktop\programacion\TI3\concatenacionTI3EA.h"
#include"C:\Users\USER\Desktop\programacion\TI3\comparacion.h"
#include"C:\Users\USER\Desktop\programacion\TI3\conversionTI3EA.h"
#include"C:\Users\USER\Desktop\programacion\TI3\inversionTI3EA.h"
#include"C:\Users\USER\Desktop\programacion\TI3\subcadenaTI3EA.h"
#include"C:\Users\USER\Desktop\programacion\TI3\busquedaTI3EA.h"

using namespace std;

string fundametos[1][2][3];
string fundamento 1 ,fundamento 2 ,fudamento 3,fundametos;
int main()
{
    int Opcion;
    char C;
    do{
    cout<<"====MENU===="<<endl;
    cout<<"1.CREAR"<<endl;
    cout<<"2.MOSTRAR"<<endl;
    cout<<"3.DECLARACION"<<endl;
    cout<<"4.LONGITUD"<<endl;
    cout<<"5.CONCATENACION"<<endl;
    cout<<"6.COMPARACION"<<endl;
    cout<<"7.CONVERSION"<<endl;
    cout<<"8.INVERSION"<<endl;
    cout<<"9.SUBCADENA"<<endl;
      cout<<"10.BUSCAR"<<endl;
    cout<<"============"<<endl;
    cout<<"Indicar la opcion que desee"<<endl;
    cin>>Opcion;
    cout<<"============"<<endl;
        switch(Opcion){

    case 1:{
        string FRASE1;
        cout<<" CREAR " <<endl;
        crearTI3IS(fundametos);
        break;}
    case 2:{
        cout<<" MOSTRAR "<<endl;
        mostrarTI3IS(fundametos);
        break;}
    case 3:{
        cout<<"DECLARAR"<<endl;
        declaracionTI3IS(fundametos)

        }
        case 4:{
        cout<<"LONGITUD"<<endl;
        longitudTI3IS()
        break;
        }
         case 5:{
        cout<<"CONCATENACION"<<endl;
        concatenacionTI3IS()
        break;

        }
        case 6:
            {

        cout<<"COMPARACION"<<endl;
        compararI3IS()
        break;

        }
        case 7:
        {

        cout<<"CONVERSION"<<endl;
        convertirI3IS()
        break;

        }
         case 8:{
        cout<<"INVERSA"<<endl;
        invertirI3IS()
        break;

        }
        case 9;{
        cout<<"SUBCADENA"<<endl;
        subcadenasI3IS()
        break;

        }
        case 10;{
         cout<<"BUSCAR"<<endl;
         break;


        }
      }
      cout<<"CONTINUAR S/N"<<endl;
      cin>>C;
    } while(C=='S');{}
    return 0;
}
