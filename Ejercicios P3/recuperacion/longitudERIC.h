#ifndef LONGITUDERIC_H_INCLUDED
#define LONGITUDERIC_H_INCLUDED

void LONGITUD (string fundamentos[1][2][3])
{
    cout << "LONGITUD" << endl;

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
    string palabra3 = fundamentos[0][0][2];

    int longitud1 = palabra1.length();
    int longitud2 = palabra2.length();
    int longitud3 = palabra3.length();

    cout << endl;
    cout << "PALABRA 1: " << palabra1 << " - LONGITUD: " << longitud1 << endl;
    cout << "PALABRA 2: " << palabra2 << " - LONGITUD: " << longitud2 << endl;
    cout << "PALABRA 3: " << palabra3 << " - LONGITUD: " << longitud3 << endl;

}



#endif // LONGITUDERIC_H_INCLUDED
