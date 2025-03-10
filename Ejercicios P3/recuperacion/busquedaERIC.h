#ifndef BUSQUEDAERIC_H_INCLUDED
#define BUSQUEDAERIC_H_INCLUDED

#include <iostream>
using namespace std;

#include <iostream>

using namespace std;

void BUSCAR (string fundamentos[1][2][3])
{
    string buscar;

    cout << "BUSCAR" << endl;

    for (int i=0; i < 1; i++)
    {
        for (int j=0; j < 2; j++)
        {
            for (int k=0; k < 3; k++)
            {
                cout << "Ingrese la palabra en la posicion [" << i+1 << "] [" << j+1 << "] [" << k+1 << "] = " ;
                cin >> fundamentos [i][j][k];
            }
        }
    }

    cout << "INGRESE LA PALABRA QUE DESEE BUSCAR" << endl;
    cin >> buscar;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (fundamentos[i][j][k] == buscar)
                {
                    cout << "ENCONTRADO en la posicion [" << i + 1 << "] [" << j + 1 << "] [" << k + 1 << "]" << endl;
                }
            }
        }
    }

}


#endif // BUSQUEDAERIC_H_INCLUDED
