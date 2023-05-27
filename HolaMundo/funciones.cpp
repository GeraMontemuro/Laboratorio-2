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

Pais BuscarPais (const char *CODIGO)
{


    FILE *p;
    Pais paisito;

    p = fopen("paises.dat", "rb");

    if(p==NULL)
    {
        return paisito;
    }

    while (fread (&paisito, sizeof(Pais), 1, p) == 1)
    {
        if (strcmp (paisito.getCodigo(),CODIGO) == 0)
        {
            //cout << "El pa�s existe en la base de datos." << endl << endl;
            fclose(p);
            return paisito;
        }

    }
    fclose(p);
   // cout << "El pa�s no se encuentra en la base de datos." << endl << endl;
    return paisito ;
}

void AgregarPais (Pais pa){

    FILE *p;

    p = fopen("paises.dat", "ab");

    if(p==NULL)
    {
        return;
    }

    bool cargaok = fwrite(&pa, sizeof(Pais), 1, p);
    if(cargaok == true){
        cout << "Archivo cargado correctamente." << endl;
    }
    else {
        cout << "No carg�." << endl;
    }

    fclose(p);
}

void ListarPaises (int punto){

    FILE *p;
    Pais ps;
    float acuSuperficie=0;
    float porcSuperficie = 0;


    p = fopen("paises.dat", "rb");

    if(p==NULL)
    {
        return;
    }

    for(int i=0; i<2; i++){
        if(i==0){
            while (fread (&ps, sizeof(Pais), 1, p) == 1){
                acuSuperficie = ps.getSuperficie();
                fclose(p);
                return;
            }
        }
        else{
            while (fread (&ps, sizeof(Pais), 1, p) == 1){
                if(punto == 0){
                    ps.mostrar();
                    return;

                }
                else{
                    cout << ps.getNombre() << "  "  << ps.getSuperficie() << endl;
                    porcSuperficie = (ps.getSuperficie() / acuSuperficie) *100;
                    cout << porcSuperficie << endl;
                }
            }
            fclose(p);
        }
    }
}

void ListarCiudadxPais(){

    char id[4];
    bool pais;

    cout << "Ingrese c�digo de pa�s: ";
    cargarCadena(id,3);

    FILE *c;
    Ciudad city;
    c = fopen("ciudades.dat", "rb");

    if(c==NULL)
    {
        return;
    }

    while (fread (&city, sizeof(Ciudad), 1, c) == 1){
        if(strcmp(city.getIDPais(), id) == 0){
            city.mostrar();
            pais = true;
        }
    }
    fclose(c);


    if(pais){
        Pais p3;

        p3 = BuscarPais(id);
        if(p3.getIDCapital() > -1){
            cout << p3.getIDCapital() << endl;
        }
        else{
            cout << "No registra capital" << endl;
        }

    }

}

