#include <iostream>
#include <string>
using std::cout;
using std::string;


int main() {
	
	int day = 3600 * 24;
	int week = (24 * 7) * 3600;
	long long year = (24 * 365) * 3600;
	cout << "One day = " << day << " seconds" << "\n" << "One week = " << week << " seconds\n" << "One year = " << year << " seconds\n";

	return 0;
}
