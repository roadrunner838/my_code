// دریافت عدد و تشخیص اینکه آیا عدد اول است یا نه
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "enter the number: ";
    cin >> number;
    bool isTheFirst = true;
    int i = 2;

    if (number < 2) { // اعداد کوچکتر از 2 اول نیستند
        isTheFirst = false;
    } else {
        while (i * i <= number) {
            if (number % i == 0) {
                isTheFirst = false;
                break;
            }
            i++;
        }
    }

    if (isTheFirst == true) {
        cout << "is a prime number" << endl;
    } else {
        cout << "is not a prime number" << endl;
    }

    return 0;
}