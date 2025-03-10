#include <iostream>
#include <string>
using namespace std;

int main() {
    string filas[2][4][3];


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 3; k++) {
                cout << "Ingrese las filas [" << i << "][" << j << "][" << k << "]= ";
                cin >> filas[i][j][k];
            }
        }
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 3; k++) {
                cout <<filas[i][j][k] << " " ;

            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}

