
#include <iostream>

using namespace std;

int main()
{
    int n = 7;
    int usuarios[] = {105, 204, 88, 310, 99, 501, 402};

    int valorBuscado;
    bool encontrado = false;

    cout << "sistema para encontrar tu valor" << endl;
    cout << "ingresa el id del usuario a busca: ";
    cin >> valorBuscado;

    for (int i = 0; i < n; i++){
        if (usuarios[i] == valorBuscado){
            encontrado = true;
            cout << "se encontro el usuario de manera exitosa " << valorBuscado << "se encontro en la posicion: " << i << endl;

            break;
        }
    }

    if(!encontrado){
        cout << "error: el usuario " << valorBuscado << "no se encuentra en el sistema" << endl;
    }

    return 0;
}