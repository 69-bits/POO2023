#pragma once
#include "Common.h"
#include "Aldeano.h"

class Command
{
public:
	Command() = default;
	~Command() = default;

	void command(string _command, TipoAldeano &_tipo);
	void intercambio(string _command, TipoAldeano &_tipo, TipoObjeto &_objeto);

private:

};