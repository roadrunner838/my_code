// دریافت عدد و چاپ مقسوم علیه های آن
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "enter the number: ";
    cin >> number;
    int m = 1;
    while (m <= number) {
        int k = number % m;
        if (k == 0) {
            cout << m << endl;
        }
        m++;
    }
    return 0;
}