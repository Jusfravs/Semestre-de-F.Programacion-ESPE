#include <iostream>

using namespace std;

int main()
{
    string nombre [4][6];
    for(int i=0;i<4;i++){

        for (int j=0;j<6;j++){
        cout<<"ingrese el nombre <<["<<i<<"]<<["<<j<<"] : " <<endl;
        cin>>nombre[i][j];
            }
    }
    for(int i=0;i<4;i++)
        {
         for (int j=0;j<6;j++)
        {
          cout<<nombre[i][j]<< "  " ;
         }
         cout<<endl;

    }

    return 0;
}
