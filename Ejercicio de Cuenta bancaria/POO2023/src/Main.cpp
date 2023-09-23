#include "CuentaBancaria.h"
#include "Common.h"

int main()
{
	CuentaBancaria cuenta;
	cuenta.inicio();
	while (cuenta.opcion != 4)
	{
		cuenta.menu();
	}
	
}