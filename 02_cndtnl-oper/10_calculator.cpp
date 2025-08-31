#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

/*
Мини-калькулятор (if/else)
Запросить два числа и оператор (+, -, *, /).
В зависимости от введённого оператора выполнить действие.
*/
int main() {
    int a,b;
    cout << "Enter a and b\n";
    cin >> a >> b;
    int plus = a + b;
    int minus = a - b;
    int multiplication = a * b;
    int division = a / b;
    
    int UserChoice;
    cout << "1 - plus\n2-minus\n3-multiplication\n4-division\n";
    cin >> UserChoice;
    switch (UserChoice){
    case 1:
        cout << "Result: " << plus << endl;
        break;
    case 2:
        cout << "Result: " << minus << endl;
        break;
    case 3:
        cout << "Result: " << multiplication << endl;
        break;
    case 4:
        if (b != 0)
            cout << "Result: " << division << endl;
        else
            cout << "Error: Division by zero!" << endl;
        break;
    default:
        cout << "Error! \nChoose nums from 1 to 4!";

    }

}
