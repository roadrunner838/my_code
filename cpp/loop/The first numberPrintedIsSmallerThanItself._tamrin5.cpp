// دریافت عدد و چاپ اعداد زوج کوچکتر از آن
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "enter the number: ";
    cin >> number;
    int n = 2; // شروع از اولین عدد  
    while (n < number) {
        bool isPrime = true;
        int i = 2;
        while (i * i <= n) { // بررسی مقسوم علیه تا جذر
            if (n % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
        if (isPrime) {
            cout << n << endl;
        }
        n++;
    }
    return 0;
}