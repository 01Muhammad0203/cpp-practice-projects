#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
Голосование
Пользователь вводит возраст. Если >=18 и <=100, вывести «Вы можете голосовать». Иначе — «Вы не можете голосовать».*/
int main() {
    int userAge;
    cout << "Enter your age, please\n";
    cin >> userAge;
    if (userAge >= 18 && userAge <= 100)
        cout << "You can vote\n";
    else cout << "You cannot vote \n";

    return 0;
}
