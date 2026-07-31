/* ordenamiento sort [1,2,3,4,5,6,7,8]
    busqueda binaria, lineal 
*/

#include <iostream>
using namespace std;

int main() {
    int n = 6;
    float saldos[] = {450.50, 120.00, 890.25, 50.00, 300.00, 10.50};
    float temporal;

    cout << "esto es un bucle de ordenamiento sort " << endl;
    cout << "ordenar de mayor a menor"<< endl;

    for (int i = 0; i < n - 1; i++){
        // bucle interno: hace la comparaciones
        // le restamos 'i' poruqe en cada pasada, el numeor mas grande ya quedo al final.
        for(int j = 0; j < n - i -1; j++){

            //aca es cunado el mayor pasa a la derecha y el menor pasa a la izquierda
            // 450 > 120 (si)
            if(saldos[j] > saldos[j + 1]){
                // temporal = 450
                temporal = saldos[j];
                //450 = 120
                saldos[j] = saldos[j + 1];
                //120 = temporal = 450
                saldos[j + 1] = temporal;
                // [450, 120, 890.25, 50.00, 300.00, 10.50]
                // [120, 50, 450, 300.00, 10.50, 890.25]
                //  0     1   2    3        4      5
                //saldos[5]
            }
        }
    }

    cout << "saldos ordenados" << endl;
    for ( int i = 0; i < n; i++){
        cout << "S/. " << saldos[i] << endl;
    }

    return 0;
}