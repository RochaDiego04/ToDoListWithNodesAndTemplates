#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>

#include "Nodo.h"
using namespace std;


class Menu {
public:
	int option;
	int identificador;
	string unaTarea;
	Nodo* unaLista;

	Menu();
	void run();
	void ShowMenuOptions();
	void setOption();
	void createList();
	void ingresarTarea(int identificador, string &unaTarea);
	void showBuscarTarea();
	int buscarTarea();
};