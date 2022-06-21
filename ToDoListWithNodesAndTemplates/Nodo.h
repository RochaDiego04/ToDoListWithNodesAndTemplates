#pragma once
#define NODO_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
using namespace std;
//template <typename T>

class Nodo {
private:
	Nodo* siguiente;
	int identificador;
	string tarea;
public:
	Nodo() {};
	Nodo* insertar(Nodo*& mLista, int mIdentificador, string mNombre);
	void mostrar(Nodo* mLista);
	void buscar(Nodo* mLista, int mIdentificador);
	Nodo* completar(Nodo*& mLista, int mIdentificador);
	Nodo* eliminar(Nodo* mLista, int mIdentificador);
};
