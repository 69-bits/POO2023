#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:

	//Constructor
	Person();
	//Destructor
	~Person();

	//Este metodo se encarga de regresar un nombre
	string getNombre()
	{
		return nombre;
	}

	//Este metodo se encarga de regresar una edad
	int getEdad()
	{
		return edad;
	}

	void setNombre(string name);

	void setEdad(int age);

private:
	string nombre;
	int edad;
};
