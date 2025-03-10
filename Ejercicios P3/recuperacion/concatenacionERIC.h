#ifndef CONCATENACIONERIC_H_INCLUDED
#define CONCATENACIONERIC_H_INCLUDED
#include <iostream>

using namespace std;

void CONCATENACION (string fundamentos[1][2][3])
{
    cout << "CONCATENACION" << endl;

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

    string palabras_unidas = "";

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                palabras_unidas += fundamentos[i][j][k] + " ";
            }
        }
    }

    cout << "PALABRAS UNIDAS: " << palabras_unidas << endl;


}


#endif // CONCATENACIONERIC_H_INCLUDED
