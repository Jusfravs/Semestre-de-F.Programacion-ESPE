#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int opcion;
    double V, D, A, T, Ac, Vf, C, Cost;
    bool salir = false;

    do {
        
        cout << "--- Programa de Análisis de Consumo de Agua ---" << endl;
        cout << "1. Calcular promedio de consumo diario por apartamento" << endl;
        cout << "2. Estimar el costo mensual de consumo" << endl;
        cout << "3. Evaluar el uso de agua" << endl;
        cout << "4. Generar reporte del consumo" << endl;
        cout << "5. Permitir estimaciones futuras" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el volumen total de agua consumida (litros): ";
                cin >> V;
                cout << "Ingrese el número de días del período de medición: ";
                cin >> D;
                cout << "Ingrese el número de apartamentos en el edificio: ";
                cin >> A;

                if (D > 0 && A > 0) {
                    C = V / (D * A);
                    cout << "Consumo promedio diario por apartamento: " << fixed << setprecision(2) << C << " litros" << endl;
                } else {
                    cout << "Los días y el número de apartamentos deben ser mayores a 0." << endl;
                }
                break;

            case 2:
                cout << "Ingrese el volumen total de agua consumida (litros): ";
                cin >> V;
                cout << "Ingrese la tarifa por metro cúbico de agua (dólares): ";
                cin >> T;

                if (T > 0) {
                    Cost = (V / 1000) * T;
                    cout << "Costo mensual de consumo: $" << fixed << setprecision(2) << Cost << endl;
                } else {
                    cout << "La tarifa debe ser mayor a 0." << endl;
                }
                break;

            case 3:
                cout << "Ingrese el consumo promedio diario por apartamento (C): ";
                cin >> C;

                if (C <= 50) {
                    cout << "Evaluación del uso de agua: Uso eficiente." << endl;
                } else if (C <= 100) {
                    cout << "Evaluación del uso de agua: Uso moderado." << endl;
                } else {
                    cout << "Evaluación del uso de agua: Uso excesivo." << endl;
                }
                break;

            case 4:
                cout << "--- Reporte del Consumo ---" << endl;
                cout << "Consumo promedio diario por apartamento: " << fixed << setprecision(2) << C << " litros" << endl;
                cout << "Costo mensual de consumo: $" << fixed << setprecision(2) << Cost << endl;

                if (C <= 50) {
                    cout << "Evaluación del uso: Uso eficiente" << endl;
                    cout << "Recomendación: El consumo está bajo control." << endl;
                } else if (C <= 100) {
                    cout << "Evaluación del uso: Uso moderado" << endl;
                    cout << "Recomendación: Considere instalar dispositivos ahorradores de agua." << endl;
                } else {
                    cout << "Evaluación del uso: Uso excesivo" << endl;
                    cout << "Recomendación: Revisión urgente: Implementar restricciones o concienciación." << endl;
                }
                break;

            case 5:
                cout << "Ingrese el porcentaje de aumento del consumo: ";
                cin >> Ac;

                if (Ac >= 0) {
                    Vf = V * (1 + Ac / 100);
                    double nuevoCosto = (Vf / 1000) * T;
                    cout << "Nuevo volumen de agua consumida: " << fixed << setprecision(2) << Vf << " litros" << endl;
                    cout << "Nuevo costo con la tarifa actual: $" << fixed << setprecision(2) << nuevoCosto << endl;
                } else {
                    cout << "El porcentaje de aumento debe ser mayor o igual a 0." << endl;
                }
                break;

            case 6:
                salir = true;
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (!salir);

    return 0;
}

