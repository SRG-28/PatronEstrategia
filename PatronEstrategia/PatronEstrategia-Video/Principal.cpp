#include"Aplicacion.h"
using namespace std;

int main() {
	//crea la aplicacion
	Aplicacion a;
	//ingreso personas a la aplicacion
	a.insertarPersona(new Persona("111", "Juan", "Rojas"));
	a.insertarPersona(new Persona("211", "Jazmin", "Rubie"));
	a.insertarPersona(new Persona("311", "Julia", "Roble"));
	a.insertarPersona(new Persona("411", "Jose", "Ramirez"));
	a.insertarPersona(new Persona("511", "Julian", "Torres"));
	a.insertarPersona(new Persona("611", "Javier", "Alvarez"));
	//genera un reporte plano

	a.generaReporte(new ReporteFormateado());

	system("pause");
	return 0;
}