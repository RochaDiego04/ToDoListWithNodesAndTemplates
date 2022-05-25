#include "Menu.h"


Menu::Menu() {
	option = 0;
}

void Menu::run() {
	while (option != 5) {
		mostrarOpcionesMenu();
		setOption();
		createList();
	}
}

void Menu::mostrarOpcionesMenu() {
	cout << "\t___--'MENU'--___" << endl;
	cout << "1. " << endl;
	cout << "2. " << endl;
	cout << "3. " << endl;
	cout << "4. " << endl;
	cout << "5. " << endl;
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

		break;
	case 2:

		break;
	}
}