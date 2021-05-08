#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	// declare variable
	int num1, num2;
	int counter = 1;
	int result;

	cout << "Enter first number : ";
	cin >> num1;

	cout << "Enter second number : ";
	cin >> num2;

	result = num1;

	// num1 be tavane num2
	while (counter <= num2 - 1) {
		result *= num1;
		counter++;
	}

	cout << "Result : " << result;

	_getch();
	return 0;
}