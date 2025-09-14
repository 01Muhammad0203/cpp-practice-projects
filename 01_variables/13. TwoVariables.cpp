/*
Напиши программу, которая:

спрашивает у пользователя два числа (типа int);
выводит их сумму и произведение.
*/
#include <iostream>
using std::cout;
using std::cin;

int main() {
	int a, b;
	cout << "Enter the num a: ";
	cin >> a;
	cout << "\nEnter the num b: ";
	cin >> b;
	int sum = a + b;
	int product = a * b;
	cout << "\nThe sum is " << sum << "\nThe product is " << product << std::endl;


	return 0;
}
