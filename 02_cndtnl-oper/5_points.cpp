#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
Оценка по баллу
Ввести число (0–100).

90–100 → «Отлично»

70–89 → «Хорошо»

50–69 → «Удовлетворительно»

0–49 → «Неудовлетворительно»
*/
int main() {
    int points;
    cout << "Enter your points,  please: ";
    cin >> points;
    if (points >= 90) {
        cout << "Your mark is excellent";
    }
    else if (points >= 70 && points  < 90) {
        cout << "Your mark is good";
    }
    else if (points >= 50 && points < 70) {
        cout << "Your mark is satisfactorily";
    }
    else {
        cout << "Your mark is unsatisfactorily";
    }

    return 0;
}
