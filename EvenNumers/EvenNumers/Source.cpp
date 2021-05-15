#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	/*for (int num = 10; num <= 98; num += 2) {
		cout << num << "\n";
	}*/

	int num = 10;
	while (num <= 98) {
		cout << num << endl;
		num += 2;
	}

	_getch();
	return 0;
}