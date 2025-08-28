#include <iostream>
#include <string>
using std::cout;
using std::cin;

int main() {
	int a;
	int b;
	cout << "Enter num a \n";
	cin >> a;
	cout << "Enter num b \n";
	cin >> b;
	if (a > b) {
		cout << a << " is bigger than " << b << std::endl;
	}
	else if (a < b) {
		cout << b << " is bigger than " << a << std::endl;
	}
	else {
		cout << a << " and " << b << " are equal \n";
	}



	return 0;
}
