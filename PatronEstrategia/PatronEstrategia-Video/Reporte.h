#pragma once  //Paso 2
#include"Persona.h"

class Reporte { // Interfaz...  <<Abstract>>
public:
	virtual void encabezado() = 0;   //Metodo virtual puro
	virtual void mostrar(Persona*) = 0;
};
