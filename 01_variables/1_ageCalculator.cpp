#include <iostream>
#include <string>
using std::cout;
using std::string;

/*
Калькулятор возраста
Запросить у пользователя год рождения и вывести возраст.
*/

int main() {
	
	cout << "Age calculator \n";
	int year;
	cout << "Enter your birth year, please: ";
	std::cin >> year;
	int age = 2025 - year;
	cout << "You are " << age << " years old" << std::endl;

	return 0;
}
