#pragma once
#include "Common.h"

class Aldeano
{
public:

	//Constructor
	Aldeano();
	//Destructor
	~Aldeano();

	//Este metodo se encarga de regresar un nombre
	string getNombre()
	{
		return stats.nombre;
	}

	int getSalud()
	{
		return stats.salud;
	}

	TipoAldeano getTipo()
	{
		return stats.tipo;
	}

	TipoObjeto getInventario()
	{
		return stats.objeto;
	}

	void setNombre(string name);
	void setSalud(int health);
	void setTipo(TipoAldeano type);
	void setInventario(TipoObjeto item);

public:
	Stats stats;
private:

};
