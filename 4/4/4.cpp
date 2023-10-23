#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string str) {
    int n = str.length();

    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    setlocale(0, "");
    string str;
    cout << "Введите строку: ";
    cin >> str;

    if (is_palindrome(str)) {
        cout << "Строка является палиндромом" << endl;
    }
    else {
        cout << "Строка не является палиндромом" << endl;
    }

    return 0;
}