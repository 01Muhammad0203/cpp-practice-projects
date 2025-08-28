#include <iostream>
#include <string>
using std::cout;
using std::cin;

int main() {
	cout << "SIGN IN \n --------------- \n";
	const std::string PASSWORD = "12345";
	cout << "Enter a password, please! \n";
	std::string pass;
	cin >> pass;
	if (pass == PASSWORD) {
		cout << "Success!";
	}
	else {
		cout << "Error!";
	}


	return 0;
}
