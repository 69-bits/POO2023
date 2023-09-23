#include "Estudiante.h"
#include "Common.h"

Estudiante::Estudiante()
{
}

Estudiante::~Estudiante()
{
}

void Estudiante::expediente(string _nombre, int _edad, int _DNI)
{
	estudiante.nombre = _nombre;
	estudiante.edad = _edad;
	estudiante.DNI = _DNI;
}

void Estudiante::print()
{
	cout << estudiante.nombre << endl;
	cout << estudiante.edad << endl;
	cout << estudiante.DNI << endl;
}
