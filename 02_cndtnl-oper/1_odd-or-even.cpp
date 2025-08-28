#include <iostream>
using std::cout;
using std::cin;

int main() {
	cout << "Enter a number to identify the type: odd or even! \n";
	int num;
	cin >> num;
	if (num % 2 == 0) {
		cout << "The number " << num << " is even. \n";
	}
	else {
		cout << "The number " << num << " is odd. \n";
	}

	return 0;
}
