#pragma once
#include<iostream>
#include"ReporteFormateado.h"
#include"ReportePlano.h"
using namespace std;

class Aplicacion {
private:
	Persona * * personas;
	int leghth;
public:
	Aplicacion();
	virtual ~Aplicacion();
	virtual void insertarPersona(Persona*);
	virtual void generaReporte(Reporte*);
};

//--------------------Definicion de metodos-----------------------
Aplicacion::Aplicacion() {
	personas = new Persona*[10];
	this->leghth = 0; 
}

Aplicacion::~Aplicacion() {
	for (int i = 0; i < leghth; i++)
		delete personas[i];
	delete[] personas;
}

void Aplicacion::insertarPersona(Persona* p) {
	personas[leghth++] = p;
}
//Aqui cae la estrategia tipo dependencia...
void Aplicacion::generaReporte(Reporte* r) {
	r->encabezado(); //Escriba el encabezado
	for (int i = 0; i < leghth; i++)  //recore el contenedor
		r->mostrar(personas[i]);  //muestra persona por persona
}