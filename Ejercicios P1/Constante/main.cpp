#include <iostream>
using namespace std;

int main() {
    int P, T, F, m, w;
    const double a = 12.3;

    int opcion;
    cout << "Seleccione una opci�n (1 para calcular P): "endl;
    cin >> opcion;

    switch (opcion) {
    case 1:
        cout << "Calcular P" << endl;
        cout << "Ingrese el valor de T: "endl;
        cin >> T;

        P = T / a;
        cout << "El valor de P es: " << P << endl;
        break;

    default:
        cout << "Opci�n no v�lida" << endl;
        break;
    }

    return 0;
}
