#include<iostream>//عددی رو دریافت کرده  و تشخیص دهد زوج هست یا فرد.
using namespace std;

int main()
{
    int num ;
    cout<<"enter the number:";
    cin>>num;

    if(num%2==0)
    cout<<"The number is even";
    else
    cout<<"is an odd number";

   
    return 0;
}
