#include <iostream>
#include <string>
#include <clocale>

using std::string;
using std::cout;
using std::cin;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Enter your name: \n";
    string name;
    cin >> name;
    string greeting = "hello, " + name;
    cout << greeting << std::endl;


    cout << "String length: " << name.size() << std::endl;
    cout << "First symbol: " << name[0] << std::endl;
    cout << "Second symbol: " << name[1] << std::endl;
    cout << "Third symbol: " << name[2] << std::endl;
    cout << "Final symbol: " << name.back() << std::endl;

    greeting.append("!!!");
    cout << "After append: " << greeting << std::endl;

    return 0;
}

