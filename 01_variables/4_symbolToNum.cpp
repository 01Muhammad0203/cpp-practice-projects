#include <iostream>
using std::cout;
using std::cin;

int main() {
    char symbol;
    cout << "Enter a character: ";
    cin >> symbol;

    int code = symbol;  // преобразуем в int
    cout << "ASCII code of '" << symbol << "' is " << code << "\n";

    return 0;
}
