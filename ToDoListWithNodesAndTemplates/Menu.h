#pragma once
#include <iostream>
#include <cstdlib>

#include "Lista.h"
#include "Parametros.h"
using namespace std;


class Menu {
public:
	int option;
	int numDeTarea;
	string unaTarea;
	string completado;
	Lista listita;
	Parametros* paramTarea;
	Menu();
	void run();
	void ShowMenuOptions();
	void setOption();
	void createList();
	void ingresarTarea(int &numDeTarea, string &unaTarea, string &completado, Parametros*& paramTarea, Lista& listita);
};