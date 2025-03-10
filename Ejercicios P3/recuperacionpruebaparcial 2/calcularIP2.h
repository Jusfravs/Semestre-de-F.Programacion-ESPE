#ifndef CALCULARIP2_H_INCLUDED
#define CALCULARIP2_H_INCLUDED

void calcularEp2pagos (float pagos [25][1][12]){

for(int i=0; i<25 ; i++){
    float  valor = 0;
    for(int j=0; j<1 ; j++){
        for(int k=0; k<12 ; k++){
              valor = valor + pagos [i][j][k];
        }

    }
    cout<<"El valor es: "<<valor<<endl;

}

}





#endif // CALCULARIP2_H_INCLUDED
