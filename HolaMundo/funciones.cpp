#include "funciones.h"
#include <iostream>
#include <cstring>

using namespace std;

void cargarCadena(char *pal, int tam)
{
    int i;
    fflush(stdin);
    for(i=0; i<tam; i++)
    {
        pal[i]=cin.get();
        if(pal[i]=='\n') break;
    }
    pal[i]='\0';
    fflush(stdin);
}

void BuscarPais ()
{
    char CODIGO[4];

    cout << "Ingrese el código del país a buscar:  ";
    cargarCadena(CODIGO,3);
    cout << endl;

    FILE *p;
    Pais paisito;

    p = fopen("paises.dat", "rb");

    if(p==NULL)
    {
        return;
    }

    while (fread (&paisito, sizeof(Pais), 1, p) == 1)
    {
        if (strcmp (paisito.getCodigo(),CODIGO) == 0)
        {
            cout << "El país existe en la base de datos." << endl << endl;
            fclose(p);
            return;
        }

    }
    fclose(p);
    cout << "El país no se encuentra en la base de datos." << endl << endl;
    return ;
}



