#pragma once
#include <iostream>
#include <string>

using namespace std;

class Rectangulo	
{
public:

	//Constructor
	Rectangulo();
	//Destructor
	~Rectangulo();

	//Este metodo se encarga de regresar un nombre
	float getAltura()
	{
		return altura;
	}

	//Este metodo se encarga de regresar una edad
	float getAncho()
	{
		return ancho;
	}

	float getArea()
	{
		return area;
	}

	float getPerimetro()
	{
		return perimetro;
	}

	void setAltura(float height);
	void setAncho(float weight);

	void setArea();
	void setPerimetro();

private:
	float altura;
	float ancho;
	float area;
	float perimetro;
};
