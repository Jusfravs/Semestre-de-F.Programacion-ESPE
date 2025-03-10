#ifndef EAP3CREAR_H_INCLUDED
#define EAP3CREAR_H_INCLUDED
#include <iostream>
#include <fstream>
using namespace std;

struct EAISST3
{
int codigo
string exposicion,laboratorio,tes intermedio ;
string evalucion,mapas mentales,proyecto;

};
     void crearIS ( vector <EIP3EP3> & notas )
     {

     int n
    cout << " INGRESE EL CODIGO " <<endl;
    cin  >> n;
    ofstreamtre notas(ERIC.txt,ios::app);
 for( int i=0 i < n ; i++)
 {
      EIP3EP3 notas ;
     cout << " INGRESE LA NOTA DE EXPOSICION " <<end;
     getline(cin ,notas.EXPOSICION);
     cout << " INGRESE LA NOTA DE LABORATORIO " <<end;
     getline(cin ,notas.LABORATORIO);
     cout << " INGRESE LA NOTA DE TES INTERMEDIO " <<end;
     getline(cin ,notas.TES INTERMEDIO );
     cout << " INGRESE LA NOTA DE EVALUACION " <<end;
     getline(cin , notas.EVALUACION );
     cout << " INGRESE LA NOTA DE MAPAS MENTALES " <<end;
     getline(cin , notas.MAPA MENTALES );
     cout << " INGRESE LA NOTA DE PROYECTO " <<end;
     getline(cin , notas.PROYECTO );

 for (int j=0;j < 14 ;j++)
 {
     cout << " INGRESE LOS VALORES DE LAS NOTAS " << j+1 <<endl;
     cin >>  EIP3EP3.notas[j];

     while (EIP3EP3.notas[j] < 14 || EIP3EP3.notas[j] > 20 )
     {
     cout << "NOTA ES MENOR A 14 , IR A CLASES DE RECUPERACION " endl;
     cin >> EIP3EP3.notas[j];
     }
 }
 }
 notas.push_back(notas);

#endif // EAP3CREAR_H_INCLUDED
