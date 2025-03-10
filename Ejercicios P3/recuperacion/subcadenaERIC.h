#ifndef SUBCADENAERIC_H_INCLUDED
#define SUBCADENAERIC_H_INCLUDED
void SUBCADENA (string fundamentos[1][2][3])
{
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

    string palabra_original = fundamentos[0][0][0];
    string palabra_extraida = palabra_original.substr(2, 4);

    cout << endl;
    cout << "PALABRA ORIGINAL: " << palabra_original << endl;
    cout << "SUBCADENA EXTRAIDA: " << palabra_extraida << endl;


#endif // SUBCADENAERIC_H_INCLUDED
