#include "Menu.h"


Menu::Menu() {
	option = 0;
	numDeTarea = 0;
	unaTarea = " ";
	completado = " ";
	Parametros* paramTarea = nullptr;
	Lista listita;
}

void Menu::run() {
	while (option != 5) {
		ShowMenuOptions();
		setOption();
		createList();
	}
}

void Menu::ShowMenuOptions() {
	cout << "\t___--'MENU'--___" << endl;
	cout << "1. Ingresar una tarea nueva" << endl;
	cout << "2. " << endl;
	cout << "3. " << endl;
	cout << "4. " << endl;
	cout << "5. Salir del programa" << endl;
}

void Menu::setOption() {
	cout << "\nYour option-> ";
	cin >> option;
	if (option < 0 || option > 5) {
		cout << "Write a valid option from the menu" << endl;
		setOption();
	}
}

void Menu::createList() {
	system("cls");
	Parametros* paramTarea = new Parametros();

	switch (option) {
	case 1:
		ingresarTarea(numDeTarea, unaTarea, completado, paramTarea, listita);
		break;
	case 2:

		break;
	}
}

void Menu::ingresarTarea(int& numDeTarea, string& unaTarea, string& completado, Parametros*& paramTarea, Lista& listita) {
	system("cls");
	cout << "Ingresa el numero de tu tarea: ";
	cin >> numDeTarea;
	cout << "Ingresa tu tarea: ";
	cin >> unaTarea;
	completado = " ";

	paramTarea = new Parametros(numDeTarea, unaTarea, completado); //se asignan los valores al constructor
	listita.insertarNuevo(paramTarea); //se insertan los parametros a la lista
}