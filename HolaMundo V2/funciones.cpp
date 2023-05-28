#include <iostream>
#include <cstdio>
#include "Pais.h"
#include "Ciudad.h"
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

int contarRegistros(){

  FILE *p;
  p=fopen ("paises.dat", "rb");

  if(p==NULL){
    return 0;
  }
  fseek(p,0,SEEK_END);
  int bytes=ftell(p);

  fclose(p);

  return bytes/sizeof(Pais);
}

void pto1(){

int cantidadRegistros=0;
cantidadRegistros=contarRegistros();
Pais *vec=new Pais[cantidadRegistros];

Pais D;
  if(vec==nullptr){
  cout<<"Error";
  return;
}

  FILE *p;
  p=fopen("paises.dat","rb");
  if(p==NULL){
    return;
  }

  for(int i=0;i<cantidadRegistros;i++){

  fread(&D,sizeof(Pais),1,p);
  vec[i]=D;
  }
  fclose(p);

  Pais aux;

  for(int j=0;j<cantidadRegistros-1;j++){
    for(int k=0;k<cantidadRegistros-j-1;k++){
      if(vec[k+1].getPoblacion()>vec[k].getPoblacion()){
        aux=vec[k+1];
        vec[k+1]=vec[k];
        vec[k]=aux;
      }
    }
  }
  for(int i=0;i<cantidadRegistros;i++){
   vec[i].mostrar();
  }
  delete []vec;
}

void pto2(){

  Ciudad city;
  city.cargar();
  Ciudad H;
  char codigoPais[4];
  Pais l;
  int codigo,poblacion;

  FILE *j;
  j=fopen("ciudades.dat","rb");
  if(j==NULL){
    return;
  }

  if(city.getPoblacion()<=0){
    cout<<"La poblacion debe ser mayor a 0, ingrese nuevamente: ";
    cin >>poblacion;
    city.setPoblacion(poblacion);
  }

  while(fread(&H,sizeof(Ciudad),1,j)==1){

   if(H.getID()==city.getID()){
      cout<<"El ID de ciudad ya existe, ingrese otro: ";
      cin >> codigo;
      city.setID(codigo);
      fseek(j,0,SEEK_SET);

   }

  }fclose(j);

  FILE *L;
  L=fopen("paises.dat","rb");
  if(L==NULL){
    return;
  }
  while(fread(&l,sizeof(Pais),1,L)==1){
    if(strcmp(city.getIDPais(),l.getCodigo())==0){
        cout<<"Ambas son iguales";
    }else{
       cout<<"El codigo de pais no existe, ingrese otro: ";
       cargarCadena(codigoPais,3);
       city.setIDPais(codigoPais);
       fseek(L,0,SEEK_SET);}
  }
  fclose(L);


}









