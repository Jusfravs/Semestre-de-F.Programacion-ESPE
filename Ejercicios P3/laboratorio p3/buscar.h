#ifndef BUSCAR_H_INCLUDED
#define BUSCAR_H_INCLUDED

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


#endif // BUSCAR_H_INCLUDED
