#include "Ciudad.h"
#include "funciones.h"
#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;

int  Ciudad::getID()
{
    return _ID;
}
char * Ciudad::getNombre()
{
    return _nombre;
}
char * Ciudad::getIDPais()
{
    return _idpais;
}
int  Ciudad::getPoblacion()
{
    return _poblacion;
}
void Ciudad::setID(int val)
{
    _ID = val;
}
void Ciudad::setNombre(const char * val)
{
    strcpy(_nombre, val);
}
void Ciudad::setIDPais(const char * val)
{
    strcpy(_idpais, val);
}
void Ciudad::setPoblacion(int val)
{
    _poblacion = val;
}
void Ciudad::mostrar(){
    cout << _ID << " " << _idpais << " " << _nombre << " " << _poblacion << endl;
}
void Ciudad::cargar(){
    cout<<"Cargar Id de ciudad :";
    cin >>_ID;
    cout<<"Cargar Nombre de ciudad :";
    cargarCadena(_nombre,34);
    cout<<"Cargar Id del pais :";
    cargarCadena(_idpais,3);
    cout<<"Cargar Poblacion :";
    cin >>_poblacion;
  }


