#pragma once
#include "Nodo.h"
#include "Parametros.h"
using namespace std;

class Lista {
public:
	Nodo* primerLista;

	Lista();
	void insertarNuevo(Parametros*);
	bool listaVacia();
	Nodo* ultimo();
};
