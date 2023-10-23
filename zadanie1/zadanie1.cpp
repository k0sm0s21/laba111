#include <iostream>

using namespace std;

bool is_prime(int n) {
    setlocale(0, "");
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


int main() {
    setlocale(0, "");
    cout << "Введите число: ";
    int n;
    cin >> n;

    if (is_prime(n)) {
        cout << "Число простое" << endl;
    }
    else {
        cout << "Число составное" << endl;
    }

    return 0;
}