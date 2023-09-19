#include <iostream>
#include "Rectangulo.h"
using namespace std;

int main()
{
	float num1;
	float num2;

	Rectangulo rectangulo;
	cout << "Dame altura: " << endl;
	cin >> num1;
	rectangulo.setAltura(num1);

	cout << "Dame ancho: " << endl;
	cin >> num2;
	rectangulo.setAncho(num2);

	rectangulo.setArea();
	rectangulo.setPerimetro();

	cout << "Altura: " << rectangulo.getAltura() << endl;
	cout << "Ancho: " << rectangulo.getAncho() << endl;
	cout << "Area: " << rectangulo.getArea() << endl;
	cout << "Perimetro: " << rectangulo.getPerimetro() << endl;

}