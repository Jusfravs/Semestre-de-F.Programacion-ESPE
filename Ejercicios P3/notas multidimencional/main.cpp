#include <iostream>
using namespace std;

int main() {
    string notas[3][6][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
        for (int k = 0; k < 3; k++) {
        cout << "Ingrese las notas [" << i << "][" << j << "][" << k << "]: ";
        cin >> notas[i][j][k];
            }
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
        for (int k = 0; k < 3; k++) {
        cout << "notas[" << i << "][" << j << "][" << k << "] = " << filas[i][j][k] << endl;
            }
        }
    }

    return 0;
}
