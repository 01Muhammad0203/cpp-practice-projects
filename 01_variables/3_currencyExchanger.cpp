#include <iostream>
#include <string>
using std::cout;
using std::string;

int main() {
    cout << "Currency exchanger\n";
    const float US = 80.45;
    const float EU = 93.79;

    double userMoney;
    cout << "How much rubles do you want to exchange? ";
    std::cin >> userMoney;

    bool userChoice;
    cout << "Enter 0 for USD or 1 for EUR: ";
    std::cin >> userChoice;

    if (userChoice == 0) {
        double money = userMoney / US;
        cout << "You will get " << money << " USD\n";
    } else {
        double money = userMoney / EU;
        cout << "You will get " << money << " EUR\n";
    }

    return 0;
}
