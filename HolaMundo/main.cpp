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
    cout << "5 -  LISTAR PAISES POR SUPERFICIE" << endl;

    cout << "0 -  SALIR" << endl << endl;

    cout << "Ingrese una opción: ";
    cin >> opcion;
    cout << endl << endl;

    switch (opcion){

    case 1:
        char CODIGO[4];
        Pais p;

        cout << "Ingrese el código del país a buscar:  ";
        cargarCadena(CODIGO,3);
        cout << endl;

        p = BuscarPais(CODIGO);
        if (p.getSuperficie()>0){
            cout << "El pais existe." << endl;
        }
        else {
            cout << "no" << endl;
        }

        break;

    case 2:
        Pais p1;
        p1.cargar();
        AgregarPais(p1);

        break;

    case 3:
        ListarPaises(true);
        break;

    case 4:
        ListarCiudadxPais();
        break;
    case 5:
        ListarPaises(false);
        break;

    }

}while(opcion !=0);

    return 0;
}
