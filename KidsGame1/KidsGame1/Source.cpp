#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int choice;
	int Class;

	do {
		system("cls");
		cout << "1) APPLE\n";
		cout << "2) DOG\n";
		cout << "3) CAT\n";
		cout << "4) ORANGE\n";
		cout << "5) BOTTLE\n";
		cout << "6) HORSE\n";
		cout << "7) KIWI\n";
		cout << "8) HEADPHONE\n";
		cout << "9) BOOK\n";
		cout << "0) EXIT\n";

		cout << endl << "Choose one of these : ";
		cin >> choice;

		system("cls");
		cout << "1) FRUIT\n";
		cout << "2) ANIMAL\n";
		cout << "3) OBJECT\n";
		cout << "Enter Class number : ";
		cin >> Class;

		switch (choice) {
		case 1:
		case 4:
		case 7:
			if (Class == 1) {
				cout << "CORRECT !";
			}
			else {
				cout << "WRONG !!!!!!!!!";
			}
			break;
		case 2:
		case 3:
		case 6:
			if (Class == 2) {
				cout << "CORRECT !";
			}
			else {
				cout << "WRONG !!!!!!!!!";
			}
			break;
		case 5:
		case 8:
		case 9:
			if (Class == 3) {
				cout << "CORRECT !";
			}
			else {
				cout << "WRONG !!!!!!!!!";
			}
			break;
		default:
			cout << "You choice is out of range !!!";
			break;
		}
		_getch();
	} while (choice != 0);

	_getch();
	return 0;
}