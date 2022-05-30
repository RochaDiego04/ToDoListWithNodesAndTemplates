#include "Lista.h"

Lista::Lista() {
	primerLista = NULL;
}

void Lista::insertarNuevo(Parametros* paramTarea) {
	Nodo* aux;
	if (listaVacia()) {
		aux = new Nodo(primerLista, paramTarea);
		primerLista = aux;
	}
	else {
		aux = ultimo();
		aux->siguiente = new Nodo(NULL, paramTarea);
	}
	cout << "\nTarea agregada correctamente" << endl;
	system("pause");
	system("cls");
}

bool Lista::listaVacia() {
	return primerLista = NULL;
}

Nodo* Lista::ultimo() {
	Nodo* temp = primerLista;
	if (!listaVacia())
		while (temp->siguiente)
			temp = temp->siguiente;
	return temp;
}