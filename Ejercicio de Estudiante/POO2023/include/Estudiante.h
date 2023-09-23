#pragma once
#include "Common.h"

class Estudiante
{
public:

	//Constructor
	Estudiante();
	//Destructor
	~Estudiante();

	//Este metodo se encarga de regresar un nombre
	void expediente(string _nombre, int _edad, int _DNI);

	void print();

public:
	Datos estudiante;
private:

};
