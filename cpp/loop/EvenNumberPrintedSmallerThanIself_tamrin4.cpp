// دریافت عدد و چاپ اعداد زوج کوچکتر از آن
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    while (number >= 0) {
        if (number % 2 == 0) {
            cout << number << endl;
        }
        number--;
    }
    return 0;
}