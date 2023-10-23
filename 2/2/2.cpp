#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите число: ";
    cin >> n;

    if (n > 0) {
        cout << "Число положительное" << endl;
    }
    else if (n < 0) {
        cout << "Число отрицательное" << endl;
    }
    else {
        cout << "Число равно нулю" << endl;
    }

    return 0;
}