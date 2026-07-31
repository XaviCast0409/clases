#include <iostream>

using namespace std;

int main(){
    int n = 9;
    int facturas[] = {12, 25, 33, 45, 59, 70, 81, 85, 102};
    //                  0 1  2   3    4   5   6  7   8


    int valarBuscado;
    bool encontrado = false;

    //punteros logicos que marcan los limites de la busqueda
    int limite_izquierdo = 0;
    int limite_derecho = n - 1;
    int medio;

    cout << "sistema de busqueda binaria" << endl;
    cout << "ingresa el valor a buscar ";
    cin >> valarBuscado;

    while(limite_izquierdo <= limite_derecho){
       medio = limite_izquierdo + (limite_derecho - limite_izquierdo) / 2;

        cout << "buscado en el indice meido: " << medio << "(valor: " << facturas[medio] << ")" << endl;

        if(facturas[medio] == valarBuscado){
            encontrado = true;
            cout << "el valor a sido encontrado en la posicion " << medio << endl;
            break;
        }

        else if(facturas[medio] < valarBuscado) {
            limite_izquierdo = medio + 1;
        }

        else{
            limite_derecho = medio - 1;
        }
    }
    if(!encontrado) {
        cout << "la factura buscada no se encuentra en la base de datos" << endl;
    }

    return 0;
}