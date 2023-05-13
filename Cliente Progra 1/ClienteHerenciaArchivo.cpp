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


    int getDNI(){return DNI;}
    Fecha getFechanacimiento(){return fechadenacimiento;}
    const char *getNombre(){return nombre;}
    const char *getApellido(){return apellido;}
    const char *getEmail(){return email;}
    const char *getTelefono(){return telefono;}

    void setDNI(const int d){DNI=d;}
    void setFechanacimiento(Fecha f){fechadenacimiento=f;}
    void setNombre(const char* n){strcpy(nombre,n);}
    void setApellido(const char* a){strcpy(apellido,a);}
    void setEmail(const char* e){strcpy(email,e);}
    void setTelefono(const char* t){strcpy(telefono,t);}
  };
    void Persona::Cargar()
  {
    cout<<"Ingrese Dni: ";
    cin >> DNI;
    cout<<"Ingrese Fecha de Nacimiento: "<<endl;
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

class Cliente: public Persona{

    private:
      char Cuit[12];
      Fecha FechaDeInicio;

    public:

      const char * getCuit(){return Cuit;}
      Fecha getFechaDeInicio(){return FechaDeInicio;}

      void setCuit(const char* s){strcpy(Cuit,s);}
      void setFechaDeInicio(Fecha r){FechaDeInicio=r;}


     void Cargar1();
     void Mostrar1();
};


void Cliente::Cargar1(){

      Persona::Cargar();
      cout<<"Ingrese Cuit: ";
      cargarCadena(Cuit,11);
      cout<<"Ingrese Fecha de Inicio: ";
      FechaDeInicio.Cargar();

}
void Cliente::Mostrar1(){
      Persona::Mostrar();
      cout<<"CUIT: "<<Cuit<<endl;
      cout<<"Fecha de Inicio: ";
      FechaDeInicio.Mostrar();
}

int CargarCliente(){
    Cliente C1;

    FILE *p;
    p = fopen("Cliente.dat","ab");
    if(p==NULL){
      cout<<"no abrio el archivo";
      return -1;
    }
    C1.Cargar1();
    int valor=fwrite(&C1,sizeof (Cliente),1,p);
    fclose(p);
      return valor;
}

bool MostrarArchivo(){
    Cliente C1;

    FILE *p;
    p = fopen("Cliente.dat","rb");
    if(p==NULL){
      cout<<"no abrio el archivo";
      return false;
    }

    while(fread(&C1,sizeof(Cliente),1,p)==1){
    C1.Mostrar1();
    cout<<endl;}
    fclose (p);

    return true;

}


int main(){

      int opcion;

    do{

        cout<<"OPCION 1 : CARGAR CLIENTE"<<endl;
        cout<<"OPCION 2 : MOSTRAR CLIENTE"<<endl;
        cout<<"OPCION 3 : MODIFICAR CLIENTE"<<endl;
        cout<<"OPCION 4 : USAR EL CLIENTE"<<endl;
        cout<<"OPCION 0 : SALIR"<<endl;

        cout<<"SELECCIONA UNA OPCION: ";
        cin >>opcion;
        cout<<endl;
        switch(opcion){

            case 1:

              if(CargarCliente()!=-1){cout<<"Se Cargo el archivo"<<endl;}
                else{cout<<"No se pudo cargar";}
              break;

            case 2:
              MostrarArchivo();
              cout<<endl;
              break;

            case 3://MODIFICAR EL ARCHIVO.
              break;

            case 4://USAR EL ARCHIVO.
              break;

            case 0:
              break;


        }

    }while(opcion!=0);


return 0;
}
