#include<iostream>//عددی رو از ورودی دریافت کرده و تشخیص دهد عدد  صفر و یا منفی هست یا مثبت.
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    if(num>0)
    cout<<"The number is positive";
    else if(num<0)
    cout<<"The number is negative";
    else
    cout<<"Zero";

    
    return 0;
}

