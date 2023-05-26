#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#include "Pais.h"
#include "Ciudad.h"
#include "funciones.h"

int main()
{

int opcion;

do{
    cout << "1 -  BUSCAR PAIS POR CODIGO" << endl;
    cout << "2 -  AGREGAR PAIS  " << endl;
    cout << "3 -  LISTAR PAISES" << endl;
    cout << "4 -  LISTAR CIUDADES Y POBLACIONES DE UN PAIS" << endl;

    cout << "0 -  SALIR" << endl;

    cin >> opcion;

    switch (opcion){

    case 1:
        BuscarPais();

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
