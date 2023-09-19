#include <iostream>
#include "Person.h"
#include "Common.h"
using namespace std;

int main()
{
	Vector2 posicion;
	posicion.setVector2(2, 3);
	posicion.dotProduct(4);
	posicion.print();

	Vector2 posicion2;
	posicion2.setVector2(4, 5);
	posicion2.print();

	int result = posicion.crossProduct(posicion2);
	cout << result << endl;

	posicion.print();
}