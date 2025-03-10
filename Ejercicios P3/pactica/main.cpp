#include <iostream>
#include <iomanip> // Para manejar la precisi�n decimal
using namespace std;

int main() {
    int opcion;
    double V, D, A, T, Ac, Vf, C, Cost;
    bool salir = false;

    do {
        // Men� interactivo
        cout << "\n--- Programa de An�lisis de Consumo de Agua ---\n";
        cout << "1. Calcular promedio de consumo diario por apartamento\n";
        cout << "2. Estimar el costo mensual de consumo\n";
        cout << "3. Evaluar el uso de agua\n";
        cout << "4. Generar reporte del consumo\n";
        cout << "5. Permitir estimaciones futuras\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nIngrese el volumen total de agua consumida (litros): ";
                cin >> V;
                cout << "Ingrese el n�mero de d�as del per�odo de medici�n: ";
                cin >> D;
                cout << "Ingrese el n�mero de apartamentos en el edificio: ";
                cin >> A;

                if (D > 0 && A > 0) {
                    C = V / (D * A);
                    cout << "Consumo promedio diario por apartamento: " << fixed << setprecision(2) << C << " litros\n";
                } else {
                    cout << "Los d�as y el n�mero de apartamentos deben ser mayores a 0.\n";
                }
                break;

            case 2:
                cout << "\nIngrese el volumen total de agua consumida (litros): ";
                cin >> V;
                cout << "Ingrese la tarifa por metro c�bico de agua (d�lares): ";
                cin >> T;

                if (T > 0) {
                    Cost = (V / 1000) * T;
                    cout << "Costo mensual de consumo: $" << fixed << setprecision(2) << Cost << "\n";
                } else {
                    cout << "La tarifa debe ser mayor a 0.\n";
                }
                break;

            case 3:
                cout << "\nIngrese el consumo promedio diario por apartamento (C): ";
                cin >> C;

                if (C <= 50) {
                    cout << "Evaluaci�n del uso de agua: Uso eficiente.\n";
                } else if (C <= 100) {
                    cout << "Evaluaci�n del uso de agua: Uso moderado.\n";
                } else {
                    cout << "Evaluaci�n del uso de agua: Uso excesivo.\n";
                }
                break;

            case 4:
                cout << "\n--- Reporte del Consumo ---\n";
                cout << "Consumo promedio diario por apartamento: " << fixed << setprecision(2) << C << " litros\n";
                cout << "Costo mensual de consumo: $" << fixed << setprecision(2) << Cost << "\n";

                if (C <= 50) {
                    cout << "Evaluaci�n del uso: Uso eficiente\n";
                    cout << "Recomendaci�n: El consumo est� bajo control.\n";
                } else if (C <= 100) {
                    cout << "Evaluaci�n del uso: Uso moderado\n";
                    cout << "Recomendaci�n: Considere instalar dispositivos ahorradores de agua.\n";
                } else {
                    cout << "Evaluaci�n del uso: Uso excesivo\n";
                    cout << "Recomendaci�n: Revisi�n urgente: Implementar restricciones o concienciaci�n.\n";
                }
                break;

            case 5:
                cout << "\nIngrese el porcentaje de aumento del consumo: ";
                cin >> Ac;

                if (Ac >= 0) {
                    Vf = V * (1 + Ac / 100);
                    double nuevoCosto = (Vf / 1000) * T;
                    cout << "Nuevo volumen de agua consumida: " << fixed << setprecision(2) << Vf << " litros\n";
                    cout << "Nuevo costo con la tarifa actual: $" << fixed << setprecision(2) << nuevoCosto << "\n";
                } else {
                    cout << "El porcentaje de aumento debe ser mayor o igual a 0.\n";
                }
                break;

            case 6:
                salir = true;
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opci�n no v�lida. Intente de nuevo.\n";
        }
    } while (!salir);

����return�0;
}
