#include <iostream>

using namespace std;

string fundamentos[1][2][3];

void LONGITUD (string fundamentos[1][2][3]);
void CONCATENACION (string fundamentos[1][2][3]);
void COMPARACION (string fundamentos[1][2][3]);
void CONVERSION (string fundamentos[1][2][3]);
void REVERSA (string fundamentos[1][2][3]);
void SUBCADENA (string fundamentos[1][2][3]);
void BUSCAR (string fundamentos[1][2][3]);

int main()
{
    int opcion;
    do
    {
        cout << "============MENU============" << endl;
        cout << "1. LONGITUD" << endl;
        cout << "2. CONCATENACION" << endl;
        cout << "3. COMPARACION" << endl;
        cout << "4. CONVERSION" << endl;
        cout << "5. REVERSA" << endl;
        cout << "6. SUBCADENA" << endl;
        cout << "7. BUSCAR" << endl;
        cout << "8. SALIR" << endl;
        cout << "===========================" << endl;
        cout << "Indicar la opcion que desee" << endl;
        cout << ">>";
        cin >> opcion;
        cout << "===========================" << endl;
        system("cls");

        switch(opcion)
        {
            case 1:
                {
                    LONGITUD (fundamentos);
                }
                break;
            case 2:
                {
                    CONCATENACION (fundamentos);
                }
                break;
            case 3:
                {
                    COMPARACION (fundamentos);
                }
                break;
            case 4:
                {
                    CONVERSION (fundamentos);
                }
                break;
            case 5:
                {
                    REVERSA (fundamentos);
                }
                break;
            case 6:
                {
                    SUBCADENA (fundamentos);
                }
                break;
            case 7:
                {
                    BUSCAR (fundamentos);
                }
                break;
            case 8:
                {
                    cout << "HASTA LUEGO, VUELVA PRONTO!!!" << endl;
                }
                break;
        }
    }
    while (opcion != 8);
    return 0;
}
