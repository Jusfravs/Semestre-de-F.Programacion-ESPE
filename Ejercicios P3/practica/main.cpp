#include <iostream>

using namespace std;

int main()
{
    int tiempo_verde_carros, tiempo_amarillo_carros, tiempo_rojo_carros;
    int ciclo;
    const int interaccionxsegundo = 200000000;
    string respuesta, respuesta2;

    cout <<"-------------------------------------------------PROYECTO PARCIAL 1-------------------------------------------------"<< endl;
    cout << "Integrantes: "<< endl;
    cout << "------------ Eric Inlago"<< endl;
    cout << "------------ Cesar Herrera"<< endl;
    cout << "------------ Wilson Vargas"<< endl;

    cout <<"-----------------------------------------------------SEMAFORO-------------------------------------------------"<< endl;
    cout <<"--------------------------------------------------------------------------------------------------------------------"<< endl;

    do
    {
    cout << "Ponga el tiempo del semaforo verde para los carros (EN SEGUNDOS)" << endl;
    cin >> tiempo_verde_carros;
    cout << "Ponga el tiempo del semaforo amarillo para los carros (EN SEGUNDOS)" << endl;
    cin >> tiempo_amarillo_carros;
    cout << "Ponga el tiempo del semaforo rojo para los carros (EN SEGUNDOS)" << endl;
    cin >> tiempo_rojo_carros;

    system("cls");                                                                                                                                      //borra lo que se encuentra en pantalla

    cout <<"-------------------------------------------------PROYECTO PARCIAL 1-------------------------------------------------"<< endl;
    cout << "Integrantes: "<< endl;
    cout << "------------ Eric Inlago"<< endl;
    cout << "------------ Cesar Herrera"<< endl;
    cout << "------------ Wilson Vargas"<< endl;

    cout <<"-----------------------------------------------------SEMAFORO-------------------------------------------------"<< endl;
    cout <<"--------------------------------------------------------------------------------------------------------------------"<< endl;

    ciclo = tiempo_verde_carros + tiempo_amarillo_carros + tiempo_rojo_carros;

    cout << "El tiempo del ciclo del semaforo sera de:" << ciclo << endl;
    cout << "Esta usted de acuerdo? si/no" << endl;
    cin >> respuesta;
    system("cls");                                                                                                                                      //borra lo que se encuentra en pantalla

    cout <<"-------------------------------------------------PROYECTO PARCIAL 1-------------------------------------------------"<< endl;
    cout << "Integrantes: "<< endl;
    cout << "------------ Eric Inlago"<< endl;
    cout << "------------ Cesar Herrera"<< endl;
    cout << "------------ Wilson Vargas"<< endl;

    cout <<"-----------------------------------------------------SEMAFORO-------------------------------------------------"<< endl;
    cout <<"--------------------------------------------------------------------------------------------------------------------"<< endl;

    if (respuesta == "si" || respuesta == "SI" || respuesta == "Si" || respuesta == "sI" || respuesta == "S" || respuesta == "s" || respuesta == "i" || respuesta == "I")
    {
        cout << "El resumen es el siguiente:" << endl;
        cout << "" << endl;
        cout << "El semaforo se mantendra en verde durante " << tiempo_verde_carros << " segundos" << endl;
        cout << "El semaforo se mantendra en amarillo durante " << tiempo_amarillo_carros << " segundos" << endl;
        cout << "El semaforo se mantendra en rojo durante " << tiempo_rojo_carros << " segundos" << endl;
    }
    }
    while (respuesta == "no" || respuesta == "NO" || respuesta == "No" || respuesta == "nO" || respuesta == "N" || respuesta == "n" || respuesta == "o" || respuesta == "O");

    cout << "" << endl;
    cout << "Presione cualquier tecla para continuar" << endl;
    cin >> respuesta2;

    if (respuesta2 == "~")
    {
        cout << "Error" << endl;
    }
    else
    {
        while (true)
        {
            for (int i = 1; i <= tiempo_verde_carros; i++)
            {
                    cout << "Luz verde " << i << " segundo(s)" << endl;
                    for (int j = 0; j < interaccionxsegundo; j++);                  //Simula el tiempo en segundos
            }

            for (int i = 1; i <= tiempo_amarillo_carros; i++)
            {
                    cout << "Luz amarillo " << i << " segundo(s)" << endl;
                    for (int j = 0; j < interaccionxsegundo; j++);                  //Simula el tiempo en segundos
            }

            for (int i = 1; i <= tiempo_rojo_carros; i++)
            {
                    cout << "Luz roja " << i << " segundo(s)" << endl;
                    for (int j = 0; j < interaccionxsegundo; j++);                  //Simula el tiempo en segundos
            }
            system("cls");
        }
    }

    return 0;
}
