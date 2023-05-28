#include <iostream>
using namespace std;
#include "ModeloParcial.h"
#include "AgenteArchivo.h"
#include "MultaArchivo.h"
#include "MultaManager.h"

void ModeloParcial::Punto1(){

    AgenteArchivo objAA;
    MultaArchivo objMA;
    Agente objAgente;
    Multa objMulta;
    int cont = 0;

    int cantidadAgentes = objAA.getCantidadRegistros();
    //cout << cantidadAgentes;

    int cantidadMultas = objMA.getCantidadRegistros();
    //cout << cantidadMultas;

    int *vecMultasxAgente = new int [cantidadAgentes] {};

    for (int i=0; i < cantidadAgentes; i++){

        objAgente = objAA.leer(i);

        for(int j=0; j < cantidadMultas; j++){
            objMulta = objMA.leer(j);

            if(objMulta.getIDAgente () == objAgente.getIdAgente() && objMulta.getFechaMulta().getAnio() == 2022 && objMulta.getEliminado()==false){
                vecMultasxAgente [i]++;
            }
        }
    }

    for (int i=0; i < cantidadAgentes; i++){

        //cout << vecMultasxAgente[i] << "   ";

        if(vecMultasxAgente[i] == 0){
            cont++;
        }
    }
    cout << "La cantidad de agentes que no realizaron multas en 2022 es: " << cont << endl;

delete []vecMultasxAgente;

}


void ModeloParcial::Punto2(){

    AgenteArchivo objAA;
    MultaArchivo objMA;
    Agente objAgente;
    Multa objMulta;

    int cantidadAgentes = objAA.getCantidadRegistros();
    //cout << cantidadAgentes;

    int cantidadMultas = objMA.getCantidadRegistros();
    //cout << cantidadMultas;

    int *vecMultasxAgente = new int [cantidadAgentes] {};
    float *vecImporteMultaxAgente = new float [cantidadAgentes] {};

    for (int i=0; i < cantidadAgentes; i++){

        objAgente = objAA.leer(i);

        for(int j=0; j < cantidadMultas; j++){
            objMulta = objMA.leer(j);

            if(objMulta.getIDAgente () == objAgente.getIdAgente() && objMulta.getFechaMulta().getAnio() == 2023 && objMulta.getEliminado()==false){
                vecMultasxAgente [i]++;
                vecImporteMultaxAgente[i]+=objMulta.getMonto();
            }
        }
        objAgente.mostrar();
        cout<<"Cant Multas: ";
        cout<<vecMultasxAgente[i]<<"  ";
        cout<<"Monto Total: ";
        cout<<vecImporteMultaxAgente[i]<<"  "<<endl;
        cout<<"------------------------------------------------------------"<<endl;
    }
delete []vecMultasxAgente;
delete []vecImporteMultaxAgente;

}

void ModeloParcial::Punto3(){

  int vecTipoInfracciones[10]={};
  Multa objMulta;
  MultaArchivo objMA;
  int cantidadDeMultas;

  cantidadDeMultas=objMA.getCantidadRegistros();

  for(int i=0;i<10;i++){
    for(int j=0;j<cantidadDeMultas;j++){
        objMulta=objMA.leer(j);
      if(objMulta.getTipoInfraccion()==i+1 && objMulta.getEliminado()==true){
          vecTipoInfracciones[i]++;
      }
    }
  }

  for(int i=0;i<10;i++)
{
  cout<<"Para el tipo de infraccion " <<i+1<<" tenemos la cantidad de: "<<vecTipoInfracciones[i]<<endl;
}


}

void ModeloParcial::Punto4(){

  MultaArchivo objMP2022("MultasPagadas2022.dat");
  MultaArchivo objMA;
  Multa objMulta;
  Multa objMP;
  MultaManager objMM;
  int cantidadDeMultas,cantidadMultasPagas;

  cantidadDeMultas=objMA.getCantidadRegistros();

  for(int i=0;i<cantidadDeMultas;i++){
    objMulta=objMA.leer(i);
    if(objMulta.getPagada()==true && objMulta.getFechaMulta().getAnio()==2022&&objMulta.getEliminado()==false){
      objMP2022.guardar(objMulta);
    }
  }

  cantidadMultasPagas=objMP2022.getCantidadRegistros();

  for(int i=0; i<cantidadMultasPagas;i++){
    objMP=objMP2022.leer(i);
    objMM.Listar(objMP);
  }



}
