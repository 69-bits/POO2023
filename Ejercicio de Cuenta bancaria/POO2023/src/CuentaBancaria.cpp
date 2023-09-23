#include "CuentaBancaria.h"

void CuentaBancaria::inicio()
{
    string _nombre;
    int _numeroCuenta = 0;

    cout << "Bienvenido al banco @#$%%, ingrese su nombre para continuar: " << endl;
    cin >> _nombre;

    cout << "Ahora ingrese su numero de cuenta: " << endl;
    cin >> _numeroCuenta;
    cuenta(_nombre, _numeroCuenta);
}

void CuentaBancaria::cuenta(string _nombre, int _numeroC)
{
    propietario = _nombre;
    numeroCuenta = _numeroC;
}

void CuentaBancaria::menu()
{
    float _saldo;
    float _monto;
    int _tiempo;

            cout << "--------------------------------------" << endl;
            cout << "Ingrese la opcion a realizar en el banco: " << endl;
            cout << endl;

            cout << "1-Mostrar saldo actual" << endl;
            cout << "2-Realizar transaccion" << endl;
            cout << "3-Revisar interes" << endl;
            cout << "4-Salir" << endl;

            cin >> opcion;

            cout << "--------------------------------------" << endl;

            switch (opcion)
            {
            case 1:
                cout << "A continuacion, se le mostrara su saldo actual con el propietario y numero de cuenta correcto: " << endl;
                mostrarSaldo();
                break;

            case 2:
                cout << "Perfecto, que transaccion quiere realizar: " << endl;
                cout << "1.Guardar     2.Retirar" << endl;
                cin >> opcion;

                cout << "Excelente, ahora ingrese el monto: " << endl;
                cin >> _saldo;

                cout << "--------------------------------------" << endl;
                transaccion(opcion, _saldo);
                break;

            case 3:
                cout << "Perfecto, necesitamos que ingrese el monto: " << endl;
                cin >> _monto;

                cout << "Por ultimo, ingrese el tiempo: " << endl;
                cin >> _tiempo;
                interes(_monto, _tiempo);
                break;

            case 4:
                cout << "Vuelva pronto..." << endl;
                break;

            default:
                cout << "No fue una opcion valida" << endl;
                break;
            }
}

void CuentaBancaria::mostrarSaldo()
{
	cout << "Propietario: " << propietario << endl;
	cout << "Con numero de cuenta: " << numeroCuenta << endl;
	cout << "Su saldo actual es : " << saldo << endl;
}

void CuentaBancaria::transaccion(int _opcion, float _arreglo)
{
		switch (_opcion)
		{
			case 1:
				saldo = saldo + _arreglo;
				cout << "Ha agregado: " << _arreglo << " a su cuenta" << endl;
				break;
					case 2:
						if (saldo > 0)
						{
							saldo = saldo - _arreglo;
							cout << "Ha retirado: " << _arreglo << " a su cuenta" << endl;
						}
						else if (saldo <= 0)
						{
							cout << "Disculpe, " << propietario << ", pero no dispone dinero para retirar" << endl;
						}
						break;
			default:
				cout << "No es una opcion" << endl;
				break;
		}
	
}

float CuentaBancaria::interes(float _monto, int _tiempo)
{
    float tasa = 0.1125;
	cout << "Siendo su tasa: " << tasa << endl;
	float interes = _monto * tasa * _tiempo;
    cout << "Su interes seria: " << interes << endl;
    return interes;
}