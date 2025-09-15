/*
Вывод суммы чисел от 1 до N
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;



int main() {
	int N = 5;
	int sum = 0;
	for (int i = 1; i <= N; i++)
		sum += i;
	cout << "Summ from 1 to " << N << " = " << sum << std::endl;
	return 0;

}
