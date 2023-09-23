#pragma once
#include "Common.h"

class CuentaBancaria
{
public:

	//Constructor
	CuentaBancaria() = default;
	//Destructor
	~CuentaBancaria() = default;

	string propietario;
	int opcion;

	void mostrarSaldo();
	void menu();
	void inicio();
	void cuenta(string _nombre, int _numeroC);
private:
	float saldo = 0;
	void transaccion(int _opcion, float _arreglo);
protected:
	int numeroCuenta;
	float interes(float _monto, int _tiempo);
};
