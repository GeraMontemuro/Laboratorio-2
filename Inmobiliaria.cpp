
#include<iostream>
#include<locale.h>
#include<cstring>

using namespace std;


	///FUNCION GLOBAL CARGAR CADENA

void cargarCadena(char *pal, int tam);

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

///CLASE FECHA
class Fecha
{
private:
    int dia, mes, anio;
public:
    Fecha(int d=0, int m=0, int a=0)
    {
        dia=d;
        mes=m;
        anio=a;
    }
    void Cargar();
    void Mostrar();
    ///sets
    void setDia(int x)
    {
        if(x>0 && x<32) dia=x;
    }
    void setMes(int x)
    {
        if(x>0 && x<13)mes=x;
    }
    void setAnio(int x)
    {
        anio=x;
    }
    ///gets
    int getDia()
    {
        return dia;
    }
    int getMes()
    {
        return mes;
    }
    int getAnio()
    {
        return anio;
    }
};

void Fecha::Cargar()
{
    cout<<"DIA: ";
    cin>>dia;
    cout<<"MES: ";
    cin>>mes;
    cout<<"ANIO: ";
    cin>>anio;
}

void Fecha::Mostrar()
{
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

/// CLASE INMUEBLE

class Inmueble
{
protected:
    char calle [25];
    int numeroPuerta;
    int codigoPostal;
    char localidad [25];
    int piso;
    char provincia [25];
    Fecha fechaIngreso;
    Fecha fechaOperacion;
    int superficieTotal;
    int tipoOperacion;


public:

    const char* getCalle () { return calle;}
    int getNumeroPta (){ return numeroPuerta;}
    int getCodigoPostal(){ return codigoPostal;}
    const char* getLocalidad(){ return localidad;}
    int getPiso(){return piso;}
    const char* getProvincia(){return provincia;}
    Fecha getFechaIngreso(){return fechaIngreso;}
    Fecha getFechaOperacion(){return fechaOperacion;}
    int getSuperficie(){return superficieTotal;}
    int getTipoOperacion(){return tipoOperacion;}

    void setCalle (const char*calle){strcpy(calle,calle);}
    void setNumeroPta(int num){numeroPuerta = num;}
    void setCodigoPostal(int cp){codigoPostal = cp;}
    void setLocalidad(const char*localidad){strcpy(localidad,localidad);}
    void setPiso(int piso){piso = piso;}
    void setProvincia(const char*prov){strcpy(provincia,prov);}
    void setFechaIngreso(Fecha ingreso){fechaIngreso = ingreso;}
    void setFechaOperacion(Fecha operacion){fechaOperacion = operacion;}
    void setSuperficie (int superf){superficieTotal = superf;}
    void setTipoOperacion(int tipo){tipoOperacion = operacion;}

};

int main(void){

	setlocale (LC_ALL, "");

return 0;
}
