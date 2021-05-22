#include <iostream>
#include <conio.h>

using namespace std;

int Maximum(int num1, int num2, int num3) {
	int max = num1;

	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;

	return max;
}

int main() {
	int x, y, z;
	
	cout << "Enter Three numbers: ";
	cin >> x >> y >> z;

	int maximum;
	maximum = Maximum(x, y, z);

	cout << "MAX = " << maximum;


	_getch();
	return 0;
}