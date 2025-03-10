#ifndef CREARIP2_H_INCLUDED
#define CREARIP2_H_INCLUDED

#include <iostream>

using namespace std;
void crearEp2 (string datos1 [25][1][2]){

for(int i=0; i<25 ; i++){
    for(int j=0; j<1 ; j++){
        for(int k=0; k<2 ; k++){
            cout << "Ingrese los datos"<<i<<j<<k<<endl;
            cin>>datos1[i][j][k];
        }
    }
}

}
void crearpagos (float pagos [25][1][12]){

for(int i=0; i<25 ; i++){
    for(int j=0; j<1 ; j++){
        for(int k=0; k<12 ; k++){
            cout << "Ingrese los pagos"<<i<<j<<k<<endl;
            cin>>pagos[i][j][k];
        }
    }
}

}



#endif // CREARIP2_H_INCLUDED
