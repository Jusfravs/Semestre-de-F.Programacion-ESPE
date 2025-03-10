#include <iostream>
using namespace std;

int main() {
    char continuar;
    do {
        int n, a;
        int suma = 0;
        float pr;

        cout << "Ingrese el numero de veces: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Ingrese el valor del ancho de banda: ";
            cin >> a;

            if (a >= 100 && a < 1000) {
                suma += a;
            } else {
                cout << "Ancho de banda no permitido" << endl;
            }
        }

        pr = static_cast<float>(suma)

        cout << "El valor de la suma es: " << suma << endl;
        cout << "El promedio es: " << pr << endl;

        cout << "¿Desea continuar? (y/n): ";
        cin >> continuar;

    } while (continuar == 'y' || continuar == 'Y');

    return 0;
}
