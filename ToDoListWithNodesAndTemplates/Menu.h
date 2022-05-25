#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;


class Menu {
public:
	int option;

	Menu();
	void run();
	void mostrarOpcionesMenu();
	void setOption();
	void createList();
};