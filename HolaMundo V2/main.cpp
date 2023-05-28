#include <iostream>
#include <cstring>
#include <cstdio>
#include <locale.h>
#include "Pais.h"
#include "Ciudad.h"
#include "funciones.h"


using namespace std;
int main()
{
setlocale (LC_ALL, "");

int opcion;

do{
    cout << "-----------------------------------------------" << endl;
    cout << "--------------------MENU-----------------------" << endl;
    cout << endl;
    cout << "1 -  LISTADO DE PAISES ORDENADO POR POBLACION"       << endl;
    cout << "2 -  AGREGAR CIUDAD AL ARCHIVO "       << endl;
    cout << "3 -  CONOCER POSICION DE UNA CIUDAD" << endl;
    cout << "4 -  ACTUALIZAR POBLACION DEL PAIS" << endl;
    cout << "5 -  CREAR ARCHIVO MUNDO.DAT" << endl;

    cout << "0 -  SALIR" << endl << endl;

    cout << "Ingrese una opción: ";
    cin >> opcion;
    cout << endl << endl;

    switch (opcion){

    case 1:
        pto1();
        break;
    case 2:
        pto2();
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;

    }

}while(opcion !=0);

    return 0;
}
