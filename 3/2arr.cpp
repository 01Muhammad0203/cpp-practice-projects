#include <iostream>
#include <string>
#include <clocale>

using std::string;
using std::cout;
using std::cin;

int main() {
    setlocale(LC_ALL, "Russian");
    int matrix[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    cout << "Матрица 2х3: " << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "";
        }
        cout << std::endl;
    }



    return 0;
}
