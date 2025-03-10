#ifndef MOSTARTI3EA_H_INCLUDED
#define MOSTARTI3EA_H_INCLUDED
#include <iostream>

using namespace std;

void mostrarTI3IS (string fundametos [1][2][3]){

for(int i=0; i<1 ; i++){
    for(int j=0; j<2 ; j++){
        for(int k=0; k<3 ; k++){

            cout <<fundametos[i][j][k]<<" ";
        }
        cout << endl;
    }
     cout << endl;
}

}


#endif // MOSTARTI3EA_H_INCLUDED
