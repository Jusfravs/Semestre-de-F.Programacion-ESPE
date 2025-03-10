#ifndef MOSTRARIP2_H_INCLUDED
#define MOSTRARIP2_H_INCLUDED
#include <iostream>

using namespace std;

void mostrarEp2 (string datos1 [25][1][2]){

for(int i=0; i<25 ; i++){
    for(int j=0; j<1 ; j++){
        for(int k=0; k<2 ; k++){

            cout <<datos1[i][j][k]<<" ";
        }
        cout << endl;
    }
     cout << endl;
}

}
  #endif // MOSTRARIP2_H_INCLUDED
