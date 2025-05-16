/*عددی رو به عنوان نمره از کاربر دریافت کرده و
 وضعیت دانش آموز را مشخص کنید اگر نمره بین ۱۴ تا ۱۶ بود وضعیت C
   و اگر نمره بین ۱۶ تا ۱۸ بود وضعیت B  و اگر بین
    ۱۸ تا ۲۰ بود وضعیت A را مشخص کنید.

*/

#include<iostream> 
using namespace std;

int main()
{
   int num;
    cout<<"enter the number:";
    cin>>num;
    if (num<=20 &&num>=18)
   cout<<"A";

    else if (num<18 && num>=16)
    cout<<"B";
       
    else if(num<16 && num>=14)
    cout<<"C";
       
    else
    cout<<"False";
        
   
    return 0;
}
