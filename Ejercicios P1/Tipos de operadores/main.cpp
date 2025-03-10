#include <iostream>

using namespace std;

int main()
{
    #include <iostream>
using namespace std;

int main() {
    char continuar;
    int opcion;

    do {
        cout << "Seleccione una opción:" << endl;
        cout << "4: Operadores lógicos" << endl;
        cout << "5: Precedencia de operadores" << endl;
        cin >> opcion;

        switch(opcion) {
            case 4:
                cout << "Operadores lógicos" << endl;
                cout << "&& (AND), || (OR)" << endl;
                break;
            case 5:
                cout << "Precedencia de los operadores" << endl;
                cout << "(), */%, +-, < <= > >=, == !=, &&, ||" << endl;
                break;
            default:
                cout << "Opción inválida" << endl;
        }

        cout << "¿Desea continuar? (y/n): "<<endl;
        cin >> continuar;

    } while (continuar == 'y' || continuar == 'Y');

    string nombre;
    int cantidad, numerodeveces = 0;
    cout << "Ingrese el número de repeticiones: "<<endl;
    cin >> cantidad;

    do {
        cout << "William" << endl;
        numerodeveces++;
    } while(numerodeveces < cantidad);

    return 0;
}
}
