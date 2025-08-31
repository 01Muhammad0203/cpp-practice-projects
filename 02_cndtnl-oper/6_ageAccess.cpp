#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
Вход по возрасту
Запросить возраст. Если <18 → «Доступ запрещён». Если 18–60 → «Доступ разрешён». Если больше 60 → «Доступ ограничен».
*/
int main() {
    int age;
    cout << "Enter your age, please: ";
    cin >> age;
    if (age < 18) {
        cout << "Access denied! \n";
    }
    else if (age >= 18 && age < 60) {
        cout << "Access allowed\n";
    }
    else {
        cout << "Access limited \n";
    }
    return 0;
}
