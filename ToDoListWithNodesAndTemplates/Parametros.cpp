#include "Parametros.h"

Parametros::Parametros() {
	numDeTarea = 0;
	unaTarea = " ";
	completado = " ";
}

Parametros::Parametros(int numDeTarea, string unaTarea, string completado) {
	this->numDeTarea = numDeTarea;
	this->unaTarea = unaTarea;
	this->completado = completado;
}

void Parametros::setNumDeTarea() {
	cin >> numDeTarea;
}

void Parametros::SetUnaTarea() {
	cin.ignore();
	getline(cin, unaTarea);
}

