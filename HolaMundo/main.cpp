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
    cout << "   -----------------------------------------------   " << endl;
    cout << "--------------------MENU-----------------------" << endl;
    cout << endl;
    cout << "1 -  BUSCAR PAIS POR CODIGO"       << endl;
    cout << "2 -  AGREGAR PAIS  "       << endl;
    cout << "3 -  LISTAR PAISES" << endl;
    cout << "4 -  LISTAR CIUDADES Y POBLACIONES DE UN PAIS" << endl;

    cout << "0 -  SALIR" << endl << endl;

    cout << "Ingrese una opción: ";
    cin >> opcion;
    cout << endl << endl;

    switch (opcion){

    case 1:
        BuscarPais();
        system("pause");
        break;

    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    }
}while(opcion !=0);

    return 0;
}
