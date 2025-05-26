// دریافت عددی و چاپ اعداد زوج دورقمی کوچکتر از آن
#include <iostream>
using namespace std;

int main() {
    bool n = true;
    int number;

    while (n) {
        cout << "Enter the number: ";
        cin >> number;
        if (number < 10) {
            n = true;
            cout << "Please enter the number again." << endl;
        } else {
            n = false;
        }
    }

    while (number >= 10) {
        if (number % 2 == 0) {
            cout << number << endl;
        }
        number--;
    }

    return 0;
}