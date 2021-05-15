#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	for (int num1 = 1; num1 <= 9; num1++) {
		for (int num2 = 1; num2 <= 9; num2++) {
			cout << num1 << "x" << num2 << "=" << num1*num2 << "\t";
		}
		cout << endl;
	}

	_getch();
	return 0;
}