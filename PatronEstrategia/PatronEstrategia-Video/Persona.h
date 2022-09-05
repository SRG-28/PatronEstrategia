#pragma once           //Paso 1 
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Persona {
private:
	string id;
	string nombre;
	string apellido;
public:
	Persona(string = "", string = "", string = "");
	virtual ~Persona();
	virtual string toString();
	virtual string getId();
	virtual string getNombre();
	virtual string getApellido();
};

//------------------------Definicion de los metodos--------------------------------
Persona::Persona(string ced, string nom, string ape) : id(ced), nombre(nom), apellido(ape){

}

Persona::~Persona() {

}

string Persona::toString() {
	stringstream s;
	s << "---------Datos de la persona-------------" << endl
		<< "Identificacion: " << id << endl
		<< "Nombre: " << nombre << endl
		<< "Apellido: " << apellido << endl;
		return s.str();
}

string Persona::getId() { return id; }
string Persona::getNombre() { return nombre; }
string Persona::getApellido() { return apellido; }