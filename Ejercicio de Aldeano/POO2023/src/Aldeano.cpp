#include "Aldeano.h"
#include "Common.h"

Aldeano::Aldeano()
{
}

Aldeano::~Aldeano()
{
}

void Aldeano::setNombre(string name)
{
	stats.nombre = name;
}

void Aldeano::setSalud(int health)
{
	stats.salud = health;
}

void Aldeano::setTipo(TipoAldeano type)
{
	stats.tipo = type;
}

void Aldeano::setInventario(TipoObjeto item)
{
	stats.objeto = item;
}
