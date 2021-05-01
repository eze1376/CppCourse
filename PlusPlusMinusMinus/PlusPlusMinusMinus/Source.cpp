#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int a = 3;

	// postincrease
	cout <<"a : " << a << endl;
	cout <<"a++ : "<<  a++ << endl;
	cout << "a : " << a << endl;

	cout << endl;
	// preincrease
	a = 3;
	cout << "a : " << a << endl;
	cout << "++a : " << ++a << endl;
	cout << "a : " << a << endl;

	_getch();
	return 0;
}