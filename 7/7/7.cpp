#include <iostream>

using namespace std;

	bool is_centennial(int year) {
		return year % 100 == 0;
 	}
	int main() {
		setlocale(0, "");
		int year;
			cout << "Введите год: ";
		cin >> year;

		if (is_centennial(year)) {
			cout << "Год является вековым" << endl;
		}
		else {
			cout << "Год не является вековым" << endl;
		}
		return 0;
	}