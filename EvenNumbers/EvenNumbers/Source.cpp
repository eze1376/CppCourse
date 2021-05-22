#include <iostream>
#include <conio.h>

using namespace std;

bool Even(int); // Signature or Prototype of Even function

int main() {

	int num = 3;
	bool even;

	while (num != 0){
		cout << "Enter a Number : ";
		cin >> num;
		even = Even(num); // Call Even function
		if (even) {
			cout << num << " is Even!";
		}
		else {
			cout << num << " is Odd!";
		}
		cout << endl;
	}

	_getch();
	return 0;
}

// Implementation of Even Function
bool Even(int x) {

	if (x % 2 == 0)
		return true;
	else
		return false;

}