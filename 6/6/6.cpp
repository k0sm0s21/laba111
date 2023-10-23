#include <iostream>

using namespace std;

bool is_power_of_two(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите число: ";
    cin >> n;

    if (is_power_of_two(n)) {
        cout << "Число является степенью двойки" << endl;
    }
    else {
        cout << "Число не является степенью двойки" << endl;
    }

    return 0;
}