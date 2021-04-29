#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	float num1;
	float num2;
	float sum;
	float mul;
	float menha;
	int division;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	cout << "number 1 = " << num1;
	cout << endl;
	cout << "number 2 = " << num2;
	cout << endl;

	sum = num1 + num2 ;
	cout << "SUM = " << sum ;
	cout << endl;

	mul = num1 * num2;
	cout << "MUL = " << mul << endl;

	menha = num1 - num2;
	cout << "MENHA = " << menha << endl;

	division = num1 / num2;
	cout << "DIV = " << division;

	_getch();
	return 0;
}