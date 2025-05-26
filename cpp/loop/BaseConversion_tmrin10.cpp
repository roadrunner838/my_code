// دریافت عددی در مبنای ده‌دهی و تبدیل آن به مبنای دودویی
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter your number: ";
    cin >> number;

    int result = 0;
    int mod = 0;
    int base = 1;
    while (number > 0) {
        mod = number % 2;
        mod = static_cast<int>(mod);
        int n = mod * base;
        result += n;
        base *= 10;
        number /= 2;
    }
    cout << result << endl;
    return 0;
}