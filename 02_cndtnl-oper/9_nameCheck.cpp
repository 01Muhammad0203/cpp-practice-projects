#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

/*
Ввод строки целиком (std::getline)
Спросить полное имя (с пробелом). Если имя совпадает с "Иван Иванов", то «Здравствуйте, Иван Иванов!», иначе «Привет, гость!».
*/
int main() {
    std::string name;
    cout << "Enter your name: \n";
    std::getline(cin, name);
    if (name == "Ivan Ivanov")
        cout << "Hello, Ivan Ivanov! \n";
    else { cout << "Hello, guest\n"; }
    return 0;
}
