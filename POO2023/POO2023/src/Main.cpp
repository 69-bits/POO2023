#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
	Person pepe;
	pepe.setNombre("Jhon");
	cout << "Dame nombre: " << pepe.getNombre() << endl;
}