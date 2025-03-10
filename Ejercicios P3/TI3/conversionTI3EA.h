#ifndef CONVERSIONTI3EA_H_INCLUDED
#define CONVERSIONTI3EA_H_INCLUDED
using namespace std;
void convertirI3IS(){
    string fundameto1,fundamento2;
    int Suma;
    float Division;
cout<<"Ingresar fundamento1"<<endl;
cin>>fundameto1;
cout<<"Ingresar fundamento2"<<endl;
cin>>fundamento2;
Suma=stoi(fundameto1)+stoi(fundamento2);
Division=stof(fundameto1)/stof(fundamento2);
cout<<"El valor de la suma es:"<<Suma<<endl;
cout<<"El valor de la Division es:"<<Division<<endl;}


#endif // CONVERSIONTI3EA_H_INCLUDED
