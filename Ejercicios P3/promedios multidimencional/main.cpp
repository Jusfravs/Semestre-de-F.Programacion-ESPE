#include <iostream>

using namespace std;

int main()
{
    string notas [3][6];
    for(int i=0;i<3;i++){

        for (int j=0;j<6;j++){
        cout<<"ingrese las natoas <<["<<i<<"]<<["<<j<<"] : " <<endl;
        cin>>notas[i][j];
            }
    }
    for(int i=0;i<3;i++)
        {
         for (int j=0;j<6;j++)
        {
          cout<<notas[i][j]<< "  " ;2
         }
         cout<<endl;

    }

    return 0;
}
