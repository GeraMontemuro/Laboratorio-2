#include "funciones.h"
#include <iostream>
#include <cstring>

using namespace std;

void BuscarPais (const char *cod)
{
    /*char cod [4];

    cin.ignore();
    cout << "Ingrese el codigo de pais a buscar: "<< endl;
    cin.getline(cod,3);*/

    FILE *p;
    Pais paisito;

    p = fopen("paises.dat", "rb");

    if(p==NULL)
    {
        return ;
    }

    while ( fread (&paisito, sizeof(Pais), 1, p) == 1)
    {
        if ( strcmp (paisito.getCodigo(), cod) == 0){
            cout << "esta" << endl;
            fclose(p);
        }

    }
    cout << "no esta" << endl;

fclose(p);

}



