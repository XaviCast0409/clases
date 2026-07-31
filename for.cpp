#include <iostream>
using namespace std;

int main(){
    int id_inicial = 1000;
    int cantidad_registros;

    cout << "ingrese la cantidad de registros: ";
    cin >> cantidad_registros;

    for(int i = 0; i <= cantidad_registros; i++){
        cout << id_inicial << ", 'ACTIVO', '2026-07-30'" << endl;

        id_inicial++;
    }
    return 0;
}