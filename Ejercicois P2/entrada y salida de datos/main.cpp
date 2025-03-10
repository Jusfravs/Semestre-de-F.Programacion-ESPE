#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream nombre("eric.txt");
    nombre << "mi nombre es eric" << endl;
    nombre.close();

    ifstream archivo("eric.txt");
    string line;


    while (getline(archivo, line)) {
        cout << line << endl;
    }

    archivo.close();
    return 0;
}
