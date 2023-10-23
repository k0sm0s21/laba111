#include <iostream>

using namespace std;


bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() {
    setlocale(0, "");
    int year;
    cout << "Введите год: ";
    cin >> year;

    if (is_leap_year(year)) {
        cout << "Год високосный" << endl;
    }
    else {
        cout << "Год не високосный" << endl;
    }

    return 0;
}