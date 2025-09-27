#include <iostream>
#include <string>
#include <clocale>

using std::string;
using std::cout;
using std::cin;

/*
Обратная строка
Пользователь вводит строку → программа выводит её в обратном порядке.
*/
int main() {
    setlocale(LC_ALL, "Russian");
    string userInput;
    cout << "Введите строку: \n";
    cin >> userInput;
    int i;
    for (i = userInput.length() - 1; i >= 0; i--) {
        cout << userInput[i];
    }




    return 0;
}

