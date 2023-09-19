#include "Command.h"


void Command::command(string _command, TipoAldeano &_tipo)
{
	if (_command == "Agua.Bendita")
	{
		cout << "Tu aldeano es regular ahora, meh..." << endl;
		_tipo = TipoAldeano::aldeanoBase;
	}
	else if (_command == "Rayo")
	{
		cout << "Tu aldeano es bruja, AAAAA!!!!!" << endl;
		_tipo = TipoAldeano::aldeanoBruja;
	}
	else if(_command == "Mordida")
	{
		cout << "Tu aldeano es Zombie, OMG!!!!" << endl;
		_tipo = TipoAldeano::aldeanoZombie;
	}
	else if (_command == "Chuleta")
	{
		cout << "Tu aldeano es Cocinero del grupo ISIMA, de locos" << endl;
		_tipo = TipoAldeano::aldeanoCocinero;
	}
	else if (_command == "Dolar.Negro")
	{
		cout << "Tu aldeano es Argentino, 0.0029 EL DOLAR ESTADOUNIDENSE AHHHHH" << endl;
		_tipo = TipoAldeano::aldeanoArgentino;
	}
	else
	{
		cout << "Comando incorrecto" << endl;
	}

}

void Command::intercambio(string _command, TipoAldeano &_tipo, TipoObjeto &_objeto)
{
	if (_tipo == TipoAldeano::aldeanoBase)
	{
		if (_command == "Pan")
		{
			cout << "Oh si, puedo ofrecerte PAN" << endl;
			_objeto = TipoObjeto::pan;
		}
	}else if (_tipo == TipoAldeano::aldeanoBruja)
	{
		if (_command == "Posiones")
		{
			cout << "Oh si, puedo ofrecerte POSIONES MAGICAS QUE TE LLEVAN A VOLAR (FUAA SON LAS 2:25 AM)" << endl;
			_objeto = TipoObjeto::posiones;
		}
	}
	else if (_tipo == TipoAldeano::aldeanoZombie)
	{
		if (_command == "Carne.Podrida")
		{
			cout << "Oh si, puedo ofrecerte CARNE PODRIDA DE ZOMBIE" << endl;
			_objeto = TipoObjeto::carnePodrida;
		}
	}
	else if (_tipo == TipoAldeano::aldeanoCocinero)
	{
		if (_command == "Carne.Rica")
		{
			cout << "Oh si, puedo ofrecerte CARNE RICA" << endl;
			_objeto = TipoObjeto::carneRica;
		}
	}
	else if (_tipo == TipoAldeano::aldeanoArgentino)
	{
		if (_command == "Peso.Argentino")
		{
			cout << "Oh si, puedo ofrecerte UN PESO ARGENTINO... casi nada" << endl;
			_objeto = TipoObjeto::pesoArgentino;
		}
	}
}
