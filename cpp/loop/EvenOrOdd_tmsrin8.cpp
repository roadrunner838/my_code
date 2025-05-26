// دو عدد رو دریافت کرده و با انتخاب کاربر اعداد زوج و یا فرد بین دو عدد را چاپ کند.
#include <iostream>
using namespace std;

int main() {
    int number1, number2, Option;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Please enter the option (1 for Even numbers, 2 for Odd numbers): ";
    cin >> Option;

    int smaller, big;
    if (number1 < number2) {
        smaller = number1;
        big = number2;
    } else {
        smaller = number2;
        big = number1;
    }

    if (Option == 1) {
        while (smaller <= big) {
            if (smaller % 2 == 0) {
                cout << smaller << endl;
            }
            smaller++;
        }
    } else if (Option == 2) {
        while (smaller <= big) {
            if (smaller % 2 != 0) {
                cout << smaller << endl;
            }
            smaller++;
        }
    }

    return 0;
}