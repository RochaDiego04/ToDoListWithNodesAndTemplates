#include "Nodo.h"



Nodo* Nodo::insertar(Nodo*& mLista, int mIdentificador, string mNombre) {
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->identificador = mIdentificador;
	nuevo_nodo->tarea = mNombre;

	Nodo* _lista = NULL;
	if (mLista != NULL) {
		_lista = mLista;
	}
	Nodo* aux1 = _lista;
	Nodo* aux2 = NULL;

	while ((aux1 != NULL) && (aux1->identificador < mIdentificador)) {
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}

	if (_lista == aux1) {
		_lista = nuevo_nodo;
	}
	else {
		aux2->siguiente = nuevo_nodo;
	}

	nuevo_nodo->siguiente = aux1;

	return _lista;
}

void Nodo::mostrar(Nodo* mLista) {
	Nodo* actual = new Nodo();
	actual = mLista;

	while (actual != NULL) {
		cout << actual->identificador << ": " << actual->tarea << endl;
		actual = actual->siguiente;
	}
}

void Nodo::buscar(Nodo* mLista, int mIdentificador) {
	bool encontrado = false;
	Nodo* actual = mLista;
	while (actual != NULL) {
		if (actual->identificador == mIdentificador) {
			cout << "Es: " << actual->tarea << endl;
			encontrado = true;
		}
		actual = actual->siguiente;
	}

	if (encontrado) {
		cout << mIdentificador << ": encontrado" << endl;
	}
	else {
		cout << mIdentificador << ": no fue encontrado" << endl;
	}
}

Nodo* Nodo::completar(Nodo*& mLista, int mIdentificador) {
	bool encontrado = false;
	Nodo* temp = NULL;
	Nodo* actual = mLista;
	while (actual != NULL) {
		if (actual->identificador == mIdentificador) {
			temp = temp->insertar(temp, actual->identificador, actual->tarea + " - listo");
			encontrado = true;
		}
		else {
			temp = temp->insertar(temp, actual->identificador, actual->tarea);
		}
		actual = actual->siguiente;
	}

	if (encontrado) {
		cout << mIdentificador << ": modificado" << endl;
	}
	else {
		cout << mIdentificador << ": no fue modificado" << endl;
	}

	return temp;
}

Nodo* Nodo::eliminar(Nodo* mLista, int mIdentificador) {
	bool encontrado = false;
	Nodo* actual = mLista;
	Nodo* temp = NULL;
	while (actual != NULL) {
		if (actual->identificador != mIdentificador) {
			temp = temp->insertar(temp, actual->identificador, actual->tarea);
		}
		else {
			encontrado = true;
		}
		actual = actual->siguiente;
	}

	if (encontrado) {
		cout << mIdentificador << ": eliminado" << endl;
	}
	else {
		cout << mIdentificador << ": no fue eliminado" << endl;
	}
	return temp;
}