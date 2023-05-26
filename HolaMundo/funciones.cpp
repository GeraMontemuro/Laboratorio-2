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
    cargarCadena(CODIGO,3);

    FILE *p;
    Pais paisito;


    p = fopen("paises.dat", "rb");

    if(p==NULL)
    {
        return;
    }

    while (fread (&paisito, sizeof(Pais), 1, p) == 1)
    {
        if (strcmp (paisito.getCodigo(),CODIGO) == 0){

            cout << "esta" << endl;
            fclose(p);
            return;

        }

    }
    fclose(p);
    cout << "no esta" << endl;
    return ;

}



