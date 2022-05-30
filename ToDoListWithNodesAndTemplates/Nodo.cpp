#include "Nodo.h"

Nodo::Nodo(Nodo* siguiente, Parametros* paramTarea) {
	this->siguiente = siguiente;
	this->paramTarea = paramTarea;
}
