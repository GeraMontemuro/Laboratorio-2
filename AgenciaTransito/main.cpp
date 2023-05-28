#include <iostream>
#include "AgenteArchivo.h"
#include "MultaArchivo.h"

using namespace std;
int main(){


  int _cantidadDeAgentes,_cantidadDeMultas;
  AgenteArchivo Agente;
  Multa M;
  Agente sss;
  MultaArchivo Multas;
  AgenteArchivo vectAgentes[40];


  _cantidadDeAgentes=Agente.getCantidadRegistros();
  cout<<_cantidadDeAgentes;

  _cantidadDeMultas=Multas.getCantidadRegistros();
  cout<<_cantidadDeMultas;


  for(int i=0;i<_cantidadDeAgentes;i++){
    sss=Agente.leer(i);
    vectAgentes[i]=sss;
  }




  return 0;
}
