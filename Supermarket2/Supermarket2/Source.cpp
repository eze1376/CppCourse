#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int money;
	int num;
	int PofakNum = 0;
	int ChipsNum = 0;
	int IceCreamNum = 0;
	bool WantsToBuy = true;


	cout << "Enter Customer Money : ";
	cin >> money;

	do {
		system("cls");
		cout << "Your Money : " << money << endl;
		cout << "1) Pofak : 1000T" << endl;
		cout << "2) Chips : 2000T" << endl;
		cout << "3) Ice cream : 3000T" << endl;
		cout << "0) Exit" << endl;
		cout << "Choose a number : ";
		cin >> num;

		if (num == 1) {
			// Pofak
			if (money >= 1000) {
				money -= 1000;
				PofakNum++;
			}
			else {
				cout << "You Don't have enough money !!!!";
				_getch();
			}
		}
		else if (num == 2) {
			// Chips
			if (money >= 2000) {
				money -= 2000;
				ChipsNum++;
			}
			else {
				cout << "You Don't have enough money !!!!";
				_getch();
			}
		}
		else if (num == 3) {
			// Ice cream
			if (money >= 3000) {
				money -= 3000;
				IceCreamNum++;
			}
			else {
				cout << "You Don't have enough money !!!!";
				_getch();
			}
		}
		else if (num == 0) {
			WantsToBuy = false;
		}
	} while (WantsToBuy == true);


	cout << endl;
	cout << "Your Money : " << money << endl;
	cout << "Basket : " << endl;
	cout << PofakNum << " Pofak" << endl;
	cout << ChipsNum << " Chips" << endl;
	cout << IceCreamNum << " Ice cream" << endl;

	_getch();
	return 0;
}