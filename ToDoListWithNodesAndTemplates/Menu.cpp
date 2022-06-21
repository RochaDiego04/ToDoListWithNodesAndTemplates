#include "Menu.h"


Menu::Menu() {
	option = 0;
	identificador = 0;
	unaTarea = " ";
	unaLista = NULL;
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
	cout << "2. Mostrar tareas" << endl;
	cout << "3. Marcar tarea como completada" << endl;
	cout << "4. Eliminar tarea" << endl;
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

	switch (option) {
	case 1:
		ingresarTarea(identificador, unaTarea);
		break;
	case 2:
		unaLista->mostrar(unaLista);
		break;
	case 3:
		showBuscarTarea();
		buscarTarea();
		unaLista->completar(unaLista, buscarTarea());
		break;
	case 4:
		showBuscarTarea();
		buscarTarea();
		unaLista->eliminar(unaLista, buscarTarea());
		break;
	case 5:
		unaLista->mostrar(unaLista);
		break;
	}
}

void Menu::ingresarTarea(int identificador, string& unaTarea) {
	system("cls");
	cout << "Ingresa el numero de tu tarea: ";
	cin >> identificador;
	cout << "Ingresa tu tarea: ";
	cin >> unaTarea;

	unaLista->insertar(*&unaLista, identificador, unaTarea);
}

void Menu::showBuscarTarea() {
	cout << "Escribe el identificador de la tarea" << endl;
}

int Menu::buscarTarea() {
	cin >> identificador;
	return identificador;
}
