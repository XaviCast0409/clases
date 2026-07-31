#include <iostream>
using namespace std;

int main()
{
    int opcion;

    do{
        cout << "..GESTOR DE DATOS.." << endl;
        cout << "1. ingresar nuevo registro" << endl;
        cout << "2. consultar registro" << endl;
        cout << "3. eliminar registro " << endl;
        cout << "0. salir del sistema" << endl;
        cout << "seleccionar una opcion: ";
        cin >> opcion;

        if(opcion == 1){
            cout << "[+] abriendo formulario de ingreso" <<endl;
            cout << "menu desplegado" << endl;
        }
        else if (opcion == 2) cout << "[?] cargando tabla de registro" << endl;
        else if (opcion ==3) cout << "[-] elminando registro" << endl;
        else if (opcion != 0) cout << "[!] error: el comando no es valido" << endl;
    }while(opcion != 0);
    cout << "cerrando conexion de la base de datos -- bye." << endl;
    return 0;
}