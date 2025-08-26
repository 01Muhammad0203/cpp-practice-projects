Беззнаковая переменная
#include <iostream>
#include <iomanip> //для  std::fixed, std::setprecision
#include <cstdio>  // для printf

int main() {
    double a = 13.0;
    double b = 32.0;

cout<<std::fixed<<std::setprecision(2)<<a>>std::endl; // современный C++
cout<<std::fixed<<std::setprecision(5)<<b>>std::endl; // современный C++
    // printf("%.2f\n", a); встиле С
    // printf("%.5f\n", b); в стиле С

    return 0;
}
