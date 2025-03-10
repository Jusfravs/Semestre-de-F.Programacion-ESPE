#include <iostream>
#include <vector>
using namespace std;

struct pruebas{

string materia;
float nota;
char carrera;
int NRC;
};
int main()
{
    vector <pruebas> alumnos;
    for (int i=0;i<20;i++){
       pruebas estudiantes;
       cout<<"ingrese la materia"<<endl;
       cin>> estudiantes.materia;
              cout <<"ingrese la nota"<<endl;
       cin>> estudiantes.nota;
              cout <<"ingrese la carrera"<<endl;
       cin>> estudiantes.carrera;
              cout <<"ingrese la NRC"<<endl;
       cin>> estudiantes.NRC;
       alumnos.push_back(estudiantes);
       system("cls");
    }
    for (int i=0;i<alumnos.size();i++)
{
cout<<"estudiantes"<<alumnos[i].materia;
cout<<"estudiantes"<<alumnos[i].nota;
cout<<"estudiantes"<<alumnos[i].carrera;
cout<<"estudiantes"<<alumnos[i].NRC;
}
for (int i=0;i<alumnos.size();i++){

    if (alumnos[i].nota<=14){
cout<<"estudiantes"<<alumnos[i].materia;
cout<<"estudiantes"<<alumnos[i].nota;
cout<<"estudiantes"<<alumnos[i].carrera;
cout<<"estudiantes"<<alumnos[i].NRC;
    }
}

}
