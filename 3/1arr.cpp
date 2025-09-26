#include <iostream>
#include <string>
#include <clocale>

using std::string;
using std::cout;
using std::cin;

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[5] = { 10,20,30,40,50 };
    cout << "Элементы массива \n";


    for (int i = 0; i < 5; i++) {
        cout << arr[i] + 1<< " \n";
    }
   
    return 0;
}
