#include <iostream>

using namespace std;

bool is_perfect_number(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (n / i != i) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите число: ";
    cin >> n;

    if (is_perfect_number(n)) {
        cout << "Число является совершенным" << endl;
    }
    else {
        cout << "Число не является совершенным" << endl;
    }

    return 0;
}
