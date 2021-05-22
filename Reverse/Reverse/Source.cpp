#include <iostream>
#include <conio.h>

using namespace std;

int Reverse(int x) {
	int tmp;
	int result = 0;

	while (x != 0) {
		tmp = x % 10;
		result = result * 10 + tmp;
		x = x / 10;
	}

	return result;
}

int main() {
	int num;

	cout << "Enter a number : ";
	cin >> num;

	cout << "Result = " << Reverse(num);

	_getch();
	return 0;
}