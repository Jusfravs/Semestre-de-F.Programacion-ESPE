
#include <iostream>
using namespace std;

class Cajero {
private:
    double saldo;
public:
    Cajero(double saldoInicial)
    {
        saldo = saldoInicial;
    }

    void consultarSaldo()
    {
    cout << "Saldo actual: $" << saldo << endl;
    }


    void retirar(double cantidad)
     {
        if (cantidad > 0 && cantidad <= saldo)
        {
        saldo -= cantidad;
        cout << "Has retirado: $" << cantidad << endl;
        }
        else if (cantidad > saldo)
        {
        cout << "Saldo insuficiente para realizar el retiro." << endl;
        } else
        {
        cout << "La cantidad a retirar debe ser mayor a 0." << endl;
        }
    }
};

int main()
 {
    Cajero cajero(25.00);
    int opcion;
    double cantidad;

    do
    {
        cout << "\=== Retiro ===" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion)
    {
        case 1:
        cajero.consultarSaldo();
        break;
        case 2:
        cout << "Ingresa la cantidad a retirar: $";
        cin >> cantidad;
        cajero retirar(cantidad);
        break;
        case 3:
        cout << "Gracias por usar el cajero automatico. ¡Hasta pronto!" << endl;
        break;
        default:
        cout << "Opción no valida. Por favor, intenta de nuevo." << endl;
    }
    }
     while (opcion != 3);

    return 0;
}
