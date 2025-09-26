#include <iostream>
#include <string>
#include <clocale>

using std::string;
using std::cout;
using std::cin;
/*
3. Практика (твоя задача, я не показываю решение❗)
✍️ Напиши три функции:
int sum(int a, int b) — возвращает сумму двух чисел.
int max(int a, int b) — возвращает большее из двух чисел.
bool isEven(int x) — проверяет, является ли число чётным.
А также протестируй их в main().
*/

int sum(int a, int b) {
    return a + b;
}
int max(int a, int b) {
    return (a > b) ? a : b;
}
bool isEven(int a) {
    return a % 2 == 0;

}
int main() {
    setlocale(LC_ALL, "Russian");
   
    cout << "Сумма равна: " << sum(7, 8) << std::endl;
    cout << "Наибольшее число : " << max(1,2) << std::endl;

    int even;
    cout << "Введите число: ";
    cin >> even;
    cout << even << (isEven(even) ? " является четным числом" : " не является четным числом\n");

    return 0;
}

