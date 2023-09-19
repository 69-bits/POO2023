#include "Rectangulo.h"

Rectangulo::Rectangulo()
{
}

Rectangulo::~Rectangulo()
{
}

void Rectangulo::setAltura(float height)
{
	altura = height;
}

void Rectangulo::setAncho(float weight)
{
	ancho = weight;
}

void Rectangulo::setArea()
{
	area = altura * ancho;
}

void Rectangulo::setPerimetro()
{
	perimetro = ((2 * altura) + (2 * ancho));
}

