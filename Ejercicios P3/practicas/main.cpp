#include <iostream>

using namespace std;
int suma(int a,int b, int c);
float dividir(float m, float n);
float multiplicacion(float k,float x );
int resta(int e,int r);
int main()
{
   int x,y,z;
   cout<<"ingrear el valor de x"<<endl;
   cin>> x;
   cout<<"ingrear el valor de y"<<endl;
   cin>> y;
   cout<<"ingrear el valor de z"<<endl;
   cin>> z;
   suma (x,y,z );
   cout<<"imprimir suma "<< endl;

    return 0;
}
int suma(int a,int b, int c)
{
    int resultadosuma=a+b;
    cout<<"imprimir resultado"<<resultadosuma <<endl;
       return resultadosuma;
}

float dividir (float m, float n)
{
    float rd=m/n;
    cout<<"imprimir resultado"<< rd <<endl;
    return rd;
}
float multiplicacion (float k,float x )
{
    float resulmultiplicar=k*x;
    cout<<"imprimir resultado"<< resulmultiplicar <<endl;
    return resulmultiplicar;
}
int resta (int e,int r)
{
    int resultadorest=e-r;
    cout<<"imprimir resultado"<< resultadorest <<endl;
    return resultadorest;
}
