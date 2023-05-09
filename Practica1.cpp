#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

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




class Persona
{
private:
    int DNI;
    Fecha fechadenacimiento;
    char nombre[25];
    char apellido[25];
    char email[25];
    char telefono[20];

public:

    void Mostrar();
    void Cargar();


    int getDNI()
    {
        return DNI;
    }
    Fecha getFechanacimiento()
    {
        return fechadenacimiento;
    }
    const char *getNombre()
    {
        return nombre;
    }
    const char *getApellido()
    {
        return apellido;
    }
    const char *getEmail()
    {
        return email;
    }
    const char *getTelefono()
    {
        return telefono;
    }

    void setDNI(const int d)
    {
        DNI=d;
    }
    void setFechanacimiento(Fecha f)
    {
        fechadenacimiento=f;
    }
    void setNombre(const char* n)
    {
        strcpy(nombre,n);
    }
    void setApellido(const char* a)
    {
        strcpy(apellido,a);
    }
    void setEmail(const char* e)
    {
        strcpy(email,e);
    }
    void setTelefono(const char* t)
    {
        strcpy(telefono,t);
    }
};
void Persona::Cargar()
{
    cout<<"Ingrese Dni: ";
    cin >> DNI;
    cout<<"Ingrese Fecha: ";
    fechadenacimiento.Cargar();
    cout<<"Ingrese Nombre: ";
    cargarCadena(nombre,24);
    cout<<"Ingrese Apellido: ";
    cargarCadena(apellido,24);
    cout<<"Ingrese Telefono: ";
    cargarCadena(telefono,19);
    cout<<"Ingrese Email: ";
    cargarCadena(email,24);
}
void Persona::Mostrar()
{
    cout<<"DNI      : "<<DNI<<endl;
    cout<<"FECHA    : ";
    fechadenacimiento.Mostrar();
    cout<<"NOMBRE   : "<<nombre<<endl;
    cout<<"APELLIDO : "<<apellido<<endl;
    cout<<"TELEFONO : "<<telefono<<endl;
    cout<<"EMAIL    : "<<email<<endl;
}

int main()
{
    Persona P1;

    P1.Cargar();
    P1.Mostrar();





    return 0;
}
