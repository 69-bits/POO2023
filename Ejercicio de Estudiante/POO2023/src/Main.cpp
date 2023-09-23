#include "Estudiante.h"
#include "Common.h"

string nombre;
int edad;
int DNI;

int main()
{
    Estudiante documentacion;

    cout << "Dame un nombre: " << endl;
    cin >> nombre;

    cout << "Dame una edad: " << endl;
    cin >> edad;

    cout << "Dame un DNI: " << endl;
    cin >> DNI;

    documentacion.expediente(nombre, edad, DNI);

    documentacion.print();

}