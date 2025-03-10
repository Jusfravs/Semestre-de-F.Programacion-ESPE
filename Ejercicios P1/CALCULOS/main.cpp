#include <iostream>
using namespace std;

int main()
{
    float Q, C, A, P, D, CA;
    cout << "Ingrese la nota de quimica" << endl;
    cin >> Q;
    cout << "Ingrese la nota de Calculo" << endl;
    cin >> C;
    cout << "Ingrese la nota de Algebra" << endl;
    cin >> A;
    cout << "Ingrese la nota de Programacion" << endl;
    cin >> P;
    cout << "Ingrese la nota de Demostraciones" << endl;
    cin >> D;
    cout << "Ingrese la nota de Cultura ambiental" << endl;
    cin >> CA;

    if (Q >= 14 && C >= 14 && A >= 14 && P >= 14 && D >= 14 && CA >= 14) {
        cout << "Aprobó el semestre" << endl;
    } else {
        cout << "Reprobó el semestre" << endl;
    }

    return 0;
}
