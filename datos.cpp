/* 
    pipeline de datos ETL (EXTRACT, TRANSFORM, LOAD)

    USUARIO{
        NOMBRE:,
        APELLIDOS:,
        DIRECCION:,
        UBIGEO:,
        FECHA DE NACIOMIENTO:,
        TOKENS DE LA TARJETA:,
        PREFERENCIAS: {
            -PRESTAMOS,
            -...
        }
    }
*/

/* 
    INGRESAR DATOS CLIMATICAS (TEMPERATURAS) FINAL DEL MESS TENEMOS QUE HACER UN PROMEDIO DE TEMPERATURAS
    NO PUEDEN HABER TEMPERATURAS FUERA DE LO NORMAL -50 , 150
    SE INGRESA CODIGO SECRETO PARA PODER TENER LA TEMPERATURA PROMEDIO -99
    
*/

/* 
cantidad lo pide el sistema
ingrese cantidad de registros: 20

id_user = 1000, 
status: activo,
creado_en: 2026-05-20,
id_user = 1001, 
status: activo,
creado_en: 2026-05-20
id_user = 1002, 
status: activo,
creado_en: 2026-05-20

*/

#include <iostream>

using namespace std;

int main () {
    int dato_sensor;
    int contador_lote;
    int suma_temperaturas;
    int continuar_datos;

    cout << "INICIANDO PIPELINE DE DATOS" << endl;

    do{
        cout << "Conectado a la base de datos correctamente... Conexion establecida" << endl;
        // inicializa las variables en cero sin todavia estar sumando
        contador_lote = 0;
        suma_temperaturas = 0;

        cout << "DEBE DE INGRESAR LA TEMPERATURA DETECTADA";
        // el usuari ingresa el dato
        cin >> dato_sensor;
        // este bucle indica que mientras el codigo no sea -99 se debe aplicar la suma de las temperaturas
        while(dato_sensor != -99){
            //aplicar la condicion
            if (dato_sensor >= -50 && dato_sensor <= 150){
                //aca se suman las temperaturas
                suma_temperaturas += dato_sensor;
                contador_lote++;
            } else {
                cout << " alerta la temperatura es fuera de rango o es incorrecta" << dato_sensor << endl;
            }
            // la suma se realiazo peor el usuario no sabe que mas hacer, aca se lo indicamos
            cout << "ingresar la siguiente temperatura";
            cin >> dato_sensor;
        }
        cout << "RESUMEN DE LOTE PROCESADO" << endl;
        if (contador_lote > 0){
            cout << "registros validos " << contador_lote << endl;
            float promedio = (float)suma_temperaturas / contador_lote;
            cout << "temperatura primedio: " << promedio << " grados" << endl;
        } else {
            cout << "el lote esta vacio o todos los datos son corructos" << endl;
        }
        cout << "Desea mantener el sistema encendido (1 = si, 0 = apagar): ";
        cin >> continuar_datos;
    }while (continuar_datos != 0);
    return 0;
}