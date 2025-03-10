#include <iostream>

using namespace std;

struct persona {
string nombre;
string apellido;
int edad;
float peso;
float tamano;
string sexo;
};

#include <iostream>

using namespace std;

struct Persona {
    string nombre;
    string apellido;
    int edad;
    float peso;
    float tamano;
    string sexo;
};

int main() {
    Persona P1 = {"Eric", "Inlago", 19, 57.5, 1.67, "masculino"};
    Persona P2 = {"Cesar", "Herrera", 19, 53.5, 1.73, "masculino"};
    Persona P3 = {"Wilson", "Vargas", 19, 73.5, 1.73, "masculino"};


    cout << "Persona 1: " << P1.nombre << " " << P1.apellido << ", "
         << P1.edad << " años, " << P1.peso << " kg, " << P1.tamano
         << " m, " << P1.sexo << endl;

    cout << "Persona 2: " << P2.nombre << " " << P2.apellido << ", "
         << P2.edad << " años, " << P2.peso << " kg, " << P2.tamano
         << " m, " << P2.sexo << endl;

    cout << "Persona 3: " << P3.nombre << " " << P3.apellido << ", "
         << P3.edad << " años, " << P3.peso << " kg, " << P3.tamano
         << " m, " << P3.sexo << endl;

    return 0;
}


