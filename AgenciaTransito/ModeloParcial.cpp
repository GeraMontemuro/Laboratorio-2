#include <iostream>
using namespace std;
#include "ModeloParcial.h"
#include "AgenteArchivo.h"
#include "MultaArchivo.h"

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

            if(objMulta.getIDAgente () == objAgente.getIdAgente() && objMulta.getFechaMulta().getAnio() == 2022){
                vecMultasxAgente [i]++;
            }
        }
    }

    for (int i=0; i < cantidadAgentes; i++){

        cout << vecMultasxAgente[i] << "   ";

        if(vecMultasxAgente[i] == 0){
            cont++;
        }
    }
    cout << "La cantidad de agentes que no realizaron multas en 2022 es: " << cont << endl;
delete []vecMultasxAgente;

}


void ModeloParcial::Punto2(){


}
