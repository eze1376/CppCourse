#include <iostream>
#include <conio.h>


using namespace std;

int main() {

	// declare variables
	int a, b, c;
	int delta;
	
	cout << "Enter A, B, C respectively: ";
	cin >> a >> b >> c;

	// calculate Delta
	delta = b * b - 4 * a * c;

	cout << "Delta: " << delta << endl;

	// Check Delta value
	if (delta > 0) {
		cout << "X1 : " << (-b + sqrt(delta)) / (2 * a) << endl;
		cout << "X2 : " << (-b - sqrt(delta)) / (2 * a) << endl;
	}
	else if (delta == 0) {
		cout << "X : " << -b / (2 * a) << endl;
	}
	else {
		cout << "Nothing!";
	}


	/*
	this 
	is  
	a multi line
	comment
	*/

	_getch();
	return 0;
}