#include <iostream>

using namespace std;

string nombre [22];

int main()
{
    for (int i= 0;i<22;i++)
    {
    cout<<"ingrese el nombre"<<i+1<<endl;
    getline(cin,nombre[i]);
    }
    cout<<"mi nombre es: "<<nombre[2]<<endl;
    return 0;
}
