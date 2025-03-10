#ifndef COMPARACIONERIC_H_INCLUDED
#define COMPARACIONERIC_H_INCLUDED
#include <iostream>

using namespace std;

void COMPARACION (string fundamentos[1][2][3])
{
    cout << "COMPARACION" << endl;

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

    string palabra1 = fundamentos[0][0][0];
    string palabra2 = fundamentos[0][0][1];

    if (palabra1 == palabra2)
    {
        cout << "LAS DOS PALABRAS SON IGUALES" << endl;
    }
    else
    {
        cout << "LAS DOS PALABRAS SON DIFERENTES" << endl;
    }


}



#endif // COMPARACIONERIC_H_INCLUDED
