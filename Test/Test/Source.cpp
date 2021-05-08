#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main() {
	int i = 0;
	while (i < 4) {
		Sleep(250);
		system("cls");
		cout << " *";
		
		Sleep(250);
		system("cls");
		cout << " *\n  *";
		
		Sleep(250);
		system("cls");
		cout << " *\n  *\n *";
		
		Sleep(250);
		system("cls");
		cout << " *\n* *\n *";

		Sleep(250);
		system("cls");
		cout << " \n* *\n *";

		Sleep(250);
		system("cls");
		cout << " \n* \n *";

		Sleep(250);
		system("cls");
		cout << " \n* \n ";

		Sleep(250);
		system("cls");

		i++;
	}


	_getch();

	return 0;
}