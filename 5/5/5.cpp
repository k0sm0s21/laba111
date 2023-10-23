#include <iostream>

using namespace std;

bool is_divisible_by_3_and_5(int n) {
    return n % 3 == 0 && n % 5 == 0;
}

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите число: ";
    cin >> n;

    if (is_divisible_by_3_and_5(n)) {
        cout << "Число кратно 3 и 5" << endl;
    }
    else {
        cout << "Число не кратно 3 и 5" << endl;
    }

    return 0;
}