#ifndef CREARTI3EA_H_INCLUDED
#define CREARTI3EA_H_INCLUDED
#define CREARBP2_H_INCLUDED
#include <iostream>

using namespace std;
void crearTI3IS (string fundametos[1][2][3]){

for(int i=0; i<1 ; i++){
    for(int j=0; j<2 ; j++){
        for(int k=0; k<3 ; k++){
            cout << "Ingrese lo que nesecita"<<i<<j<<k<<endl;
            cin>>fundametos[i][j][k];
        }
    }
}

}


#endif // CREARTI3EA_H_INCLUDED
