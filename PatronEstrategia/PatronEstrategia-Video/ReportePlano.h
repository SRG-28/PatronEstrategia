#pragma once          //Paso 3
#include"Reporte.h"
#include"Persona.h"

class ReportePlano : public Reporte {
public: 
	ReportePlano();
	virtual ~ReportePlano();
	void encabezado();   //Metodo virtual puro
	void mostrar(Persona* p);
};

//---------------Definicion de los metodos-------------------------
ReportePlano::ReportePlano() {

}

ReportePlano::~ReportePlano() {

}

void ReportePlano::encabezado() {
	cout << "*********** REPORTE PLANO ***********" << endl;
}

void ReportePlano::mostrar(Persona* p) {   //formato normal
	cout << p->toString().c_str() << endl;
}