#ifndef BUSQUEDACEDEÑOP2_H_INCLUDED
#define BUSQUEDACEDEÑOEP2_H_INCLUDED



#endif // BUSQUEDAINLAGOEP2_H_INCLUDED
void buscarcodigo(string nombre[2], string codigo[1]) {
    string nombreBusqueda;
    cout << "Ingrese el nombre para buscar los pagos: ";
    cin >> nombreBusqueda;

    bool encontrado = false;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {

                if (datos[i][j] == nombreBusqueda) {
                    cout << "pagos de " << nombreBusqueda << ":\n";
                    for (int n = 0; n < 3; n++) {
                        cout << "pagos " << n + 1 << ": " << pagos[i][m] << endl;
                    }
                    encontrado = true;
                    break;
                }
            }
            if (encontrado) break;
        }
        if (encontrado) break;
    }

    if (!encontrado) {
        cout << "El nombre no fue encontrado.\n";
    }
}

