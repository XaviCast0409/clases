#include <iostream>
using namespace std;

int main() {
    int num_departamentos = 2;
    int num_empleados = 3;
    float ventas_empleado, subtotal_departament;
    float total_empresa = 0.0;

    cout << "SISTEMA DE CONSOLIDADO DE VENTAS" << endl;

    for(int dep = 1; dep <= num_departamentos; dep++){
        cout << "procesando departamento " << dep << "---" << endl;

        subtotal_departament = 0.0;
        
        for(int emp = 1; emp <= num_empleados; emp++){
            cout << "Ingrese la ventas del empleado " << emp << ": s/ ";
            cin >> ventas_empleado;

            subtotal_departament += ventas_empleado;
        }

        cout << "subtotal del departamento " << dep <<": s/ " << subtotal_departament << endl;

        total_empresa += subtotal_departament;
    }
    
    cout << "ventas totales de la empresa : s/." << total_empresa <<  endl;
    
    return 0;
}