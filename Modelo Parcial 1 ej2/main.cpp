#include <iostream>
#include <cstdlib>
#include <cstring>
#include "parcialm1.h"
using namespace std;


int main()
{
    ArchivoProveedor p ("proveedores.dat");
    Proveedor pv;

    int cont [24]={};

    int cantProveedores = p.contarRegistros();


   for(int i=0; i < cantProveedores; i++){
        pv = p.leerRegistro(i);
        cont[pv.getProvincia()-1]++;
    }

    int pos = -1;
    for(int i=0; i<24; i++){
        if(cont[i] != 0 && pos == -1){
        pos = i;
        }
        else if (cont[i] !=0 && cont[i] < cont[pos]){
            pos = i;
        }
    }

    if(pos!= -1){
        cout << pos + 1;
    }

return 0;
}
