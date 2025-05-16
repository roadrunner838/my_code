#include<iostream>//.عددی رو از ورودی دریافت کرده و تشخیص دهد عدد منفی هست یا مثبت.
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    if(num>0)
    cout<<"The number is positive";
    else
    cout<<"The number is negative";

    
    return 0;
}

