#include <iostream>
#include <string>
#include <clocale>

using std::cout;
using std::cin;
using std::string;
using std::endl;



int main() {

    std::setlocale(LC_ALL, "Russian");
    string name;
    int age;
    int height;
    cout << "Введите ваше имя: ";
    cin >> name;
    cout << "Введите ваше возраст: ";
    cin >> age;
    cout << "Введите ваше рост: ";
    cin >> height;

    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << endl;
    cout << "Рост: " << height << endl;

    return 0;
}
