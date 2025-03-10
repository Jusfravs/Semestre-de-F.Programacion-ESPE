#ifndef REVERSAERIC_H_INCLUDED
#define REVERSAERIC_H_INCLUDED
#include <iostream>
#include <algorithm>

using namespace std;

void REVERSA (string fundamentos[1][2][3])
{
    cout << "REVERSA" << endl;

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
}



#endif // REVERSAERIC_H_INCLUDED
