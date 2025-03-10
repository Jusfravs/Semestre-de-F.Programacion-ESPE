#include <iostream>
#include <string>

using namespace std;

int main() {
    string producto1, producto2;
    float precio1, precio2, subtotal, iva, total;
    int cantidad1, cantidad2;

    cout << "Ingrese el nombre del primer producto: " << endl;
    cin >> producto1;
    cout << "Ingrese el precio del primer producto: " << endl;
    cin >> precio1;
    cout << "Ingrese la cantidad del primer producto: " << endl;
    cin >> cantidad1;

    cout << "Ingrese el nombre del segundo producto: " << endl;
    cin >> producto2;
    cout << "Ingrese el precio del segundo producto: " << endl;
    cin >> precio2;
    cout << "Ingrese la cantidad del segundo producto: " << endl;
    cin >> cantidad2;

    subtotal = (precio1 * cantidad1) + (precio2 * cantidad2);
    iva = subtotal * 0.12;
    total = subtotal + iva;

    cout << "--- Factura ---" << endl;
    cout << "Producto 1: " << producto1 << " | Cantidad: " << cantidad1 << " | Precio unitario: $" << precio1 << endl;
    cout << "Producto 2: " << producto2 << " | Cantidad: " << cantidad2 << " | Precio unitario: $" << precio2 << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "IVA (12%): $" << iva << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
