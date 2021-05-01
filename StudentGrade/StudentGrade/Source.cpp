#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	float score;

	cout << "Enter student score: ";
	cin >> score;

	cout << endl << "score is : " << score << endl;

	if (score >= 18 && score <=20) {
		cout << "Excelent";
	}
	else if (score >= 16) {
		cout << "Very good";
	}
	else if (score >= 14) {
		cout << "Good";
	}
	else if (score >= 10) {
		cout << "Pass";
	}
	else {
		cout << "Fail";
	}

	_getch();

	return 0;
}