#pragma once
#include "Ciudad.h"
#include "Pais.h"

Pais BuscarPais (const char *CODIGO);
void cargarCadena(char *pal, int tam);
void AgregarPais (Pais pa);
void ListarPaises (bool punto);
void ListarCiudadxPais();
float AcumuladorSuperficie();


