#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
Определение максимума из трёх чисел
Пользователь вводит три числа. Программа выводит большее.
*/
int main() {
    int a, b, c;
    cout << "Enter num a: ";
    cin >> a;
    cout << "Enter num b: ";
    cin >> b;
    cout << "Enter num c: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << a << " is the biggest" << endl;
    }
    else if (b >= a && b >= c) {
        cout << b << " is the biggest" << endl;
    }
    else {
        cout << c << " is the biggest" << endl;
    }

    return 0;
}
