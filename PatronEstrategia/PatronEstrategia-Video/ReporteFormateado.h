#pragma once         //Paso 4    //IMP PARA COPY Y PASTE USAR CONTROL H PARA CAMBIAR LOS NOMBRES FACIL
#include"Persona.h"
#include"Reporte.h"

class ReporteFormateado : public Reporte {
public:
	ReporteFormateado();
	virtual ~ReporteFormateado();
	void encabezado();   //Metodo virtual puro
	void mostrar(Persona* p);
};

//---------------Definicion de los metodos-------------------------
ReporteFormateado::ReporteFormateado() {

}

ReporteFormateado::~ReporteFormateado() {

}

void ReporteFormateado::encabezado() {
	cout << "*********** REPORTE FORMATEADO ***********" << endl;
}

void ReporteFormateado::mostrar(Persona* p) {   //FORMATO XML.....
	cout << "<Empleado>" << endl
		<< "<Cedula> " << p->getId() << " <\\Cedula>" << endl
		<< "<Nombre> " << p->getNombre() << " <\\Nombre>" << endl
		<< "<Apellido> " << p->getApellido() << " <\\Apellido>" << endl
		<< "<\\Empleado>" << endl <<endl <<endl;
}