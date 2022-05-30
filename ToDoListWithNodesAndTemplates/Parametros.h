#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Parametros {
public:
	int numDeTarea;
	string unaTarea;
	string completado;

	Parametros();
	Parametros(int numDeTarea, string unaTarea, string completado);
	void setNumDeTarea();
	void SetUnaTarea();
};