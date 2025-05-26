// دو عدد رو دریافت کرده و مقسوم علیه مشترک شأن را چاپ کند.
#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "enter the number: ";
    cin >> number1;
    cout << "enter the number: ";
    cin >> number2;

    int smaler;
    if (number1 < number2) {
        smaler = number1;
    } else {
        smaler = number2;
    }

    int m1 = 1;
    while (m1 < smaler) {
        int k = smaler % m1;
        int z = smaler % m1;
        if (k == 0 && z == 0) {
            cout << m1 << endl;
        }
        m1++;
    }
    return 0;
}