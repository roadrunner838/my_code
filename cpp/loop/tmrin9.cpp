// دریافت تعدادی عدد از کاربر و چاپ بزرگترین و مجموع آنها
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int max = 0;
    int number;

    while (true) {
        cout << "Please enter your number. If you want to end, enter 0: ";
        cin >> number;
        if (number == 0) {
            break;
        }
        sum += number;
        if (number > max) {
            max = number;
        }
    }
    cout << "plural=" << sum << endl;
    cout << "max=" << max << endl;

    return 0;
}