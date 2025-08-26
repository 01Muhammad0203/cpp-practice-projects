#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    string nums = "214123";
    string str = "is7";
    auto password = nums + str;
    cout << "You password is: " << password << endl;

    return 0;
}
