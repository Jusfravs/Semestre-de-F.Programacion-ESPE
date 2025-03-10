#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream nombre("justin.txt");
    nombre << "mi nombre es justin" << endl;
    nombre.close();

    ifstream archivo("justin.txt");
    string line;


    while (getline(archivo, line)) {
        cout << line << endl;
    }

    archivo.close();
    return 0;
}
