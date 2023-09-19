#pragma once
#include <iostream>
#include <string>
using namespace std;

enum TipoAldeano
{
	aldeanoBase = 1,
	aldeanoBruja = 2,
	aldeanoZombie = 3,
	aldeanoCocinero = 4,
	aldeanoArgentino = 5
};

enum TipoObjeto
{
	pan = 1,
	posiones = 2,
	carnePodrida = 3,
	carneRica = 4,
	pesoArgentino = 5
};


struct Stats
{
	string nombre;
	int salud;
	TipoAldeano tipo;
	TipoObjeto objeto;
};
