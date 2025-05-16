#include<iostream>// عددی رو از ورودی دریافت کرده و بیان کند چه روزی از هفته  هست( در صورتی که عددی نامعتبر وارد شود پیغام مناسب نمایش داده شود)
using namespace std;

int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    switch (num)
    {
    case 1:
       cout<<"Saturday";
        break;
            case 2:
       cout<<"Sunday";
        break;
            case 3:
       cout<<"Monday";
        break;
            case 4:
       cout<<"Tuesday";
        break;
            case 5:
       cout<<"Wednesday";
        break;
            case 6:
       cout<<"Thursday";
        break;
            case 7:
       cout<<"Friday";
        break;
    
    default:
    cout<<"The entered number is invalid.";
        break;
    }
   
    return 0;
}
