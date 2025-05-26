// دریافت یک عدد و چاپ اعداد کوچکتر از آن
#include <iostream>

int main() {
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    while (number > 0) {
        std::cout << number << std::endl;
        number--;
    }

    return 0;
}