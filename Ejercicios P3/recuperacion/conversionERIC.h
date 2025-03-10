#ifndef CONVERSIONERIC_H_INCLUDED
#define CONVERSIONERIC_H_INCLUDED
#include <iostream>

using namespace std;

void CONVERSION (string fundamentos[1][2][3])
{
    cout << "CONVERSION" << endl;

    for (int i=0; i < 1; i++)
    {
        for (int j=0; j < 2; j++)
        {
            for (int k=0; k < 3; k++)
            {
                cout << "Ingrese un numero en la posicion [" << i+1 << "] [" << j+1 << "] [" << k+1 << "] = " ;
                cin >> fundamentos [i][j][k];
            }
        }
    }

    int numero1 = stoi(fundamentos[0][0][0]);
    int numero2 = stoi(fundamentos[0][0][1]);
    int numero3 = stoi(fundamentos[0][1][0]);
    int numero4 = stoi(fundamentos[0][1][1]);

    int suma = numero1 + numero2 + numero3 + numero4;

    cout << endl;
    cout << "EL VALOR DE LA SUMA DE LOS 4 NUMEROS ES: " << suma << endl;
}




#endif // CONVERSIONERIC_H_INCLUDED
