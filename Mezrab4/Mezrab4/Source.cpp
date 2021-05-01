#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int num = 4;
	int num2 = 4;
	int i = 1;


	// Ravesh 1
	cout << "Ravesh 1 " << endl;
	cout << num << endl;

	// change (num = num + 4;)
	num += 4;
	cout << num << endl;

	num += 4;
	cout << num << endl;

	num += 4;
	cout << num << endl;

	num += 4;
	cout << num << endl;

	cout << endl << endl;


	// Ravesh 2
	cout << "Ravesh 2 " << endl;
	cout << i * num2 << endl;
	
	i++;
	cout << i * num2 << endl;

	i++;
	cout << i * num2 << endl;

	i++;
	cout << i * num2 << endl;

	i++;
	cout << i * num2 << endl;



	_getch();
	return 0;
}