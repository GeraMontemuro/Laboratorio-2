#include "Pais.h"
#include <cstring>
#include <cstdio>
#include <iostream>
#include "funciones.h"
using namespace std;


void Pais::mostrar(){
    cout << _codigo << " " << _codigo2 << " " << _nombre << " " << _continente << " " << _superficie << " ";
    cout << _poblacion << " " << _independencia << " " << _expectativaDeVida << " " << _capital << endl;
}
void Pais::cargar(){
  cout << "Ingrese Codigo de Pais ";
  cargarCadena(_codigo,3);
  cout << "Ingrese Codigo de Pais ";
  cargarCadena(_codigo2,2);
  cout << "Ingrese Nombre del Pais ";
  cargarCadena(_nombre,44);
  cout << "Ingrese Continente del Pais ";
  cargarCadena(_continente,19);
  cout << "Ingrese Superficie del Pais ";
  cin >>_superficie;
  cout << "Ingrese Poblacion del Pais ";
  cin >>_poblacion;
  cout << "Ingrese año de Independencia ";
  cin >>_independencia;
  cout << "Ingrese expectativa de vida ";
  cin >>_expectativaDeVida;
  cout << "Ingrese capital ";
  cin >>_capital;

}
void Pais::setCodigo(const char *codigo){
    strcpy(_codigo, codigo);
}
void Pais::setCodigo2(const char *codigo2){
    strcpy(_codigo2, codigo2);
}
void Pais::setNombre(const char *nombre){
    strcpy(_nombre, nombre);
}
void Pais::setContinente(const char *continente){
    strcpy(_continente, continente);
}
void Pais::setSuperficie(float superficie){
    _superficie = superficie;
}
void Pais::setPoblacion(int poblacion){
    _poblacion = poblacion;
}
void Pais::setIndependencia(short independencia){
    _independencia = independencia;
}
void Pais::setExpectativaDeVida(float expectativa){
    _expectativaDeVida = expectativa;
}
void Pais::setIDCapital(int IDCapital){
    _capital = IDCapital;
}
char * Pais::getCodigo(){
    return _codigo;
}
char * Pais::getCodigo2(){
    return _codigo2;
}
char * Pais::getNombre(){
    return _nombre;
}
char * Pais::getContinente(){
    return _continente;
}
float Pais::getSuperficie(){
    return _superficie;
}
int Pais::getPoblacion(){
    return _poblacion;
}
short Pais::getIndependencia(){
    return _independencia;
}
float Pais::getExpectativaDeVida(){
    return _expectativaDeVida;
}
int Pais::getIDCapital(){
    return _capital;
}


