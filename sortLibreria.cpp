#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 8;
    int ids_empleados[] = {1054, 902, 3045, 102, 500, 2011, 8, 432};

    cout << "sort con libreria" << endl;
    cout << "ordenamiento de ids de los empleados" << endl;

    sort(ids_empleados, ids_empleados + n);

    cout << "ids ordenados exitosamente" << endl;
    for(int i = 0; i < n; i++){
        cout << "ID: " << ids_empleados[i] << endl;
    }

    return 0;
}