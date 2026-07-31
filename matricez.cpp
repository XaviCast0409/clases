#include <iostream>
using namespace std;

int main() {
    int valor;

    cout << "GENERADOR DE MATRIZ " << endl;
    cout << "introduce el valor maximo de la matriz (ej.5): ";
    cin >> valor;

    cout << "\t";
    for(int i = 1; i <= valor; i++){
        cout << i << "\t";
    }
    cout << endl << endl;

    for ( int i = 1; i <= valor; i++){
        cout << i << "\t";

        for(int j = 1; j <= valor; j++){
            cout << (i * j) << "\t";
        }

        cout << endl;
    }

    return 0;
}