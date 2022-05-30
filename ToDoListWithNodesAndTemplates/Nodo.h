#pragma once
#include <iostream>
#include <cstdlib>
#include "Parametros.h"
using namespace std;
//template <typename T>

class Nodo {
public:
	//Parametros
	Nodo* siguiente;
	Parametros* paramTarea;

	Nodo(Nodo*, Parametros*);
};
