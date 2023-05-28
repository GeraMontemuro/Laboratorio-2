#include <iostream>
#include <cstring>
#include "ModeloParcial.h"
using namespace std;

void ModeloParcial:: listarRecaudacion(){

  int vectorRecaudacionCurso[10];
  Pago objP;
  PagosArchivo objPA;
  int cantidadDeRegistrosPagos;
  Fecha Fechatipo(10,05,2020);


  cantidadDeRegistrosPagos=objPA.getCantidad();
 // cout<<cantidadDeRegistrosPagos;

  for(int i=0;i<10;i++){

    for (int j=0;j<cantidadDeRegistrosPagos;j++){

      objP=objPA.leer(j);

      if(objP.getIdCurso()==i+1 && (objP.getFecha().getAnio()==2020)){
        if(objP.getFecha().getMes()==05){
          if(objP.getFecha().getDia()>10){
              cout<< objP.getFecha().toString()<<endl;
            }
        }
        else if(objP.getFecha().getMes()>05){
          cout<< objP.getFecha().toString()<<endl;
        }
      }
      else if(objP.getIdCurso()==i+1 &&(objP.getFecha().getAnio()>2020)){
        cout<< objP.getFecha().toString()<<endl;
      }
    }
  }
}
