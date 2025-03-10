#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definici�n de la estructura Pago
struct Pago {
    string codigo;
    string nombre;
    string mes;
    double valor;
    string cuenta;
};

vector<Pago> pagos;

// Funci�n para agregar un pago
void agregarPago() {
    Pago nuevoPago;
    cout << "Ingrese c�digo: "; cin >> nuevoPago.codigo;
    cout << "Ingrese nombre: "; cin.ignore(); getline(cin, nuevoPago.nombre);
    cout << "Ingrese mes: "; getline(cin, nuevoPago.mes);
    cout << "Ingrese valor del pago: "; cin >> nuevoPago.valor;
    cout << "Ingrese n�mero de cuenta: "; cin >> nuevoPago.cuenta;
    pagos.push_back(nuevoPago);
    cout << "Pago registrado correctamente.\n";
}

// Funci�n para mostrar todos los pagos
void mostrarPagos() {
    if (pagos.empty()) {
        cout << "No hay pagos registrados.\n";
        return;
    }
    for (const auto& pago : pagos) {
        cout << "Codigo: " << pago.codigo << " | Nombre: " << pago.nombre
             << " | Mes: " << pago.mes << " | Valor: " << pago.valor
             << " | Cuenta: " << pago.cuenta << endl;
    }
}

// Funci�n para buscar pagos por mes
void buscarPorMes() {
    string mesBuscado;
    cout << "Ingrese el mes a buscar: "; cin.ignore(); getline(cin, mesBuscado);
    double total = 0;
    for (const auto& pago : pagos) {
        if (pago.mes == mesBuscado) {
            cout << "Codigo: " << pago.codigo << " | Nombre: " << pago.nombre
                 << " | Valor: " << pago.valor << " | Cuenta: " << pago.cuenta << endl;
            total += pago.valor;
        }
    }
    cout << "Total de pagos en " << mesBuscado << ": " << total << endl;
}

// Funci�n para buscar pagos por c�digo de usuario
void buscarPorCodigo() {
    string codigoBuscado;
    cout << "Ingrese el c�digo del usuario: "; cin >> codigoBuscado;
    for (const auto& pago : pagos) {
        if (pago.codigo == codigoBuscado) {
            cout << "Mes: " << pago.mes << " | Valor: " << pago.valor << " | Cuenta: " << pago.cuenta << endl;
        }
    }
}

// Funci�n para actualizar un pago
void actualizarPago() {
    string codigo;
    cout << "Ingrese el c�digo del pago a actualizar: "; cin >> codigo;
    for (auto& pago : pagos) {
        if (pago.codigo == codigo) {
            cout << "Ingrese nuevo nombre: "; cin.ignore(); getline(cin, pago.nombre);
            cout << "Ingrese nuevo mes: "; getline(cin, pago.mes);
            cout << "Ingrese nuevo valor del pago: "; cin >> pago.valor;
            cout << "Ingrese nuevo n�mero de cuenta: "; cin >> pago.cuenta;
            cout << "Pago actualizado correctamente.\n";
            return;
        }
    }
    cout << "Pago no encontrado.\n";
}

// Funci�n para eliminar un pago
void eliminarPago() {
    string codigo;
    cout << "Ingrese el c�digo del pago a eliminar: "; cin >> codigo;
    for (auto it = pagos.begin(); it != pagos.end(); ++it) {
        if (it->codigo == codigo) {
            pagos.erase(it);
            cout << "Pago eliminado correctamente.\n";
            return;
        }
    }
    cout << "Pago no encontrado.\n";
}

// Men� principal
int main() {
    int opcion;
    do {
        cout << "\n--- Gestion de Pagos ---\n";
        cout << "1. Registrar un pago\n";
        cout << "2. Consultar pagos por mes\n";
        cout << "3. Consultar pagos por c�digo de usuario\n";
        cout << "4. Listar todos los pagos\n";
        cout << "5. Actualizar un pago\n";
        cout << "6. Eliminar un pago\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregarPago(); break;
            case 2: buscarPorMes(); break;
            case 3: buscarPorCodigo(); break;
            case 4: mostrarPagos(); break;
            case 5: actualizarPago(); break;
            case 6: eliminarPago(); break;
            case 7: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opci�n no v�lida.\n";
        }
    } while (opcion != 7);
    return 0;
}
