#include <iostream>


using namespace std;



void EsUnSegundo() {

        for (int i = 10; i < 100000000; i++) {



        }

    }



int main() {

    int tiempoVerde = 10;

    int tiempoAmarillo = 3;

    int tiempoRojo = 7;

    int estadoActual = 0;

    int opcionMenu = 0;

    bool repetir = true;

    int contadorCiclos = 0;

    float velocidadSemaforo = 1.0;

    int tiempoRestante = 0;



    while (opcionMenu != 5) {



        cout << "=== MENU SEMAFORO ===" << endl;

        cout << "1. Configurar tiempos" << endl;

        cout << "2. Iniciar semaforo normal" << endl;

        cout << "3. Modo emergencia" << endl;

        cout << "4. Cambiar velocidad" << endl;

        cout << "5. Salir" << endl;

        cout << "Seleccione una opcion: ";

        cin >> opcionMenu;



        switch (opcionMenu) {

            case 1:

                cout << "\nIngrese tiempo para luz verde: ";

                cin >> tiempoVerde;

                cout << "Ingrese tiempo para luz amarilla: ";

                cin >> tiempoAmarillo;

                cout << "Ingrese tiempo para luz roja: ";

                cin >> tiempoRojo;

                break;



            case 2:

                repetir = true;

                contadorCiclos = 0;



                while (repetir) {

                    switch (estadoActual) {

                        case 0:

                            cout << "=== LUZ VERDE ===" << endl;

                            tiempoRestante = tiempoVerde / velocidadSemaforo;

                            while (tiempoRestante > 0) {

                                cout << "Tiempo: " << tiempoRestante << " segundos" << endl;

                                EsUnSegundo();

                                tiempoRestante--;

                            }

                            estadoActual = 1;

                            break;



                        case 1: //

                            cout << "=== LUZ AMARILLA ===" << endl;

                            tiempoRestante = tiempoAmarillo / velocidadSemaforo;

                            while (tiempoRestante > 0) {

                                cout << "Tiempo: " << tiempoRestante << " segundos" << endl;

                                EsUnSegundo();

                                tiempoRestante--;

                            }

                            estadoActual = 2;

                            break;



                        case 2:

                            cout << "=== LUZ ROJA ===" << endl;

                            tiempoRestante = tiempoRojo / velocidadSemaforo;

                            while (tiempoRestante > 0) {

                                cout << "Tiempo: " << tiempoRestante << " segundos" << endl;

                                EsUnSegundo();

                                tiempoRestante--;

                            }

                            estadoActual = 0;

                            contadorCiclos++;

                            break;

                    }



                    cout << "Ciclos completados: " << contadorCiclos << endl;

                    cout << "¿Desea continuar? (1=Si, 0=No): ";

                    int continuar;

                    cin >> continuar;

                    repetir = (continuar == 1);

                }

                break;



            case 3:

                cout << "=== MODO EMERGENCIA ===" << endl;

                tiempoRestante = 10;

                while (tiempoRestante > 0) {

                    if (tiempoRestante % 2 == 0) {

                        cout << "!!! AMARILLO ENCENDIDO !!!" << endl;

                    } else {

                        cout << "!!! AMARILLO APAGADO !!!" << endl;

                    }

                    EsUnSegundo();

                    tiempoRestante--;

                }

                break;



            case 4:

                cout << "Seleccione velocidad:" << endl;

                cout << "1. Normal (x1)" << endl;

                cout << "2. Rápido (x0.5)" << endl;

                cout << "3. Lento (x2)" << endl;

                int velocidadOpcion;

                cin >> velocidadOpcion;



                if (velocidadOpcion == 1) {

                    velocidadSemaforo = 1.0;

                } else if (velocidadOpcion == 2) {

                    velocidadSemaforo = 0.5;

                } else if (velocidadOpcion == 3) {

                    velocidadSemaforo = 2.0;

                }

                break;



            case 5:

                cout << "Saliendo del programa..." << endl;

                break;



            default:

                cout << "Opción no válida. Intente de nuevo." << endl;

        }

    }
