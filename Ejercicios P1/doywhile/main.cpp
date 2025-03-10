#include <iostream>
using namespace std;

int main() {
    int opcion;
    char continuar;

    do {
        cout << "Elija una opción:" << endl;
        cout << "1: Operadores de asignación" << endl;
        cout << "2: Operadores aritméticos" << endl;
        cout << "3: Operadores relacionales" << endl;
        cout << "4: Operadores lógicos" << endl;
        cout << "5: Precedencia de operadores" << endl;
        cout << "Ingrese un número (1-5): ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Operadores de asignación:" << endl;
                cout << "=, +=, -=, *=, /=" << endl;
                break;

            case 2:
                cout << "\nOperadores aritméticos:" << endl;
                cout << "+, -, *, /, %, ++, --" << endl;
                break;

            case 3:
                cout << "Operadores relacionales:" << endl;
                cout << "==, !=, >, <, >=, <=" << endl;
                break;

            case 4:
                cout << "Operadores lógicos:" << endl;
                cout << "&& (AND), || (OR), ! (NOT)" << endl;
                break;

            case 5:
                cout << "Precedencia de operadores:" << endl;
                cout << "1. ()" << endl;
                cout << "2. * / %" << endl;
                cout << "3. + -" << endl;
                cout << "4. < <= > >=" << endl;
                cout << "5. == !=" << endl;
                cout << "6. &&" << endl;
                cout << "7. ||" << endl;
                break;

            default:
                cout << "\nOpción inválida!" << endl;
        }

        cout << "¿Desea continuar? (y/n): ";
        cin >> continuar;

    } while(continuar == 'y' || continuar == 'Y');

    return 0;
}
