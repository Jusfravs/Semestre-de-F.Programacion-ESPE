#include <iostream>
using namespace std;

int main() {
    int P, T, F, m, w;
    const double a = 12.3;

    int opcion;
    cout << "Seleccione una opción (1 para calcular P): "endl;
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
        cout << "Opción no válida" << endl;
        break;
    }

    return 0;
}
