/*
Напиши программу, которая:
спрашивает возраст пользователя;
сохраняет его в переменную int age;
выводит:
Вам X лет!
*/
#include <iostream>


int main() {
	int  age;
	std::cout << "Enter your age, please \n";
	std::cin >> age;
	std::cout << "\nYou are " << age << " years old!\n";


}
