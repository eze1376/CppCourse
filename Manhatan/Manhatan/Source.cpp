#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	long long money = 24;
	int year = 2021 - 1626;
	int rate = 16;
	long long sood;

	for (rate = 16; rate <= 20; rate++) {
		money = 24;
		for (int i = 1; i <= year; i++) {
			sood = money * rate / 100;
			money += sood;
		}
		cout << "rate " << rate <<"% : " << money << "\n";
	}

	_getch();
	return 0;
}