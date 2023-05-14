#include <iostream>
#include <cstdlib>
#include <cstring>
#include "parcialm1.h"

using namespace std;
///codigo de obra, direccion y provincia de las obras con estado "en ejecucion"

class Pto1
{
private:
 char codigoObra[5];
    char direccion[30];
    int provincia;
   int estadoEjecucion;

public:

    void Mostrar(){
        cout<<codigoObra<<endl;
        cout<<direccion<<endl;
        cout<<provincia<<endl;
        cout<<estadoEjecucion<<endl;
    }

    const char* getCodigoObra(){return codigoObra;}
    const char* getDireccion(){return direccion;}
    int getProvincia(){return provincia;}
    int getEstadoEjecucion(){return estadoEjecucion;}

    void setCodigoObra(const char *co){strcpy(codigoObra, co);}
    void setDireccion(const char *d){strcpy(direccion,d);}
    void setProvincia(int p){provincia=p;}
    void setEstadoEjecucion(int e){estadoEjecucion=e;}

} ;

class ArchivoPto1
{
private:
  char nombre[30];
public:
    ArchivoPto1(const char *n){
        strcpy(nombre, n);
    }
};

int main()
{





    return 0;
}
