#include <iostream>
#include <cstdlib>
#include <cstring>
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

///CLASE PERSONA

class Persona
{
protected:
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

///CLASE EMPLEADO

class Empleado : public Persona
{
private:
    int categoria;
    float sueldo;
    Fecha fechaIngreso;

public:
    Empleado (){
        categoria = 0;
        sueldo = 0;
        fechaIngreso = Fecha();
    }

    int getCategoria(){return categoria;}
    float getSueldo(){return sueldo;}
    Fecha getFechaIngreso(){return fechaIngreso;}

    void setCategoria(int cat){ categoria = cat;}
    void setSueldo(float s){ sueldo = s;}
    void setFechaIngreso(Fecha ingreso){fechaIngreso = ingreso;}

};

///CLASE PROVEEDOR

class Proveedor : public Persona
{
private:
    int CUIL;
    int tipoProducto;
    char condicionPago;

public:
    Proveedor (){
        CUIL = 0;
        tipoProducto = 0;
        condicionPago = 'x';
    }

    int getCuil (){return CUIL;}
    int getTipoProducto(){return tipoProducto;}
    char getCondicionPago(){return condicionPago;}

    void setCuil (int cuil){ CUIL = cuil;}
    void setTipoProducto (int prod){ tipoProducto = prod;}
    void  setCondicionPago (char cond ){condicionPago = cond;}

};

///CLASE DOCENTE

class Docente : public Persona
{
private:
    int legajo;
    char cargo [15];
    Fecha fechaIngreso;

public:
    Docente(){
        legajo = 0;
        cargo[15] = {};
        fechaIngreso = Fecha();
    }

    int getLegajo(){return legajo;}
    const char* getCargo(){return cargo;}
    Fecha getFechaIngreso(){return fechaIngreso;}

    void setLegajo(int leg){ legajo = leg;}
    void setCargo (const char* car){strcpy (cargo, car);}
    void setFechaIngreso(Fecha ingreso){ fechaIngreso = ingreso;}
};

int main()
{
    Persona P1;
    P1.Cargar();
    P1.Mostrar();
    Empleado E1;
    E1.setCategoria(2);
    cout << E1.getCategoria();





    return 0;
}
