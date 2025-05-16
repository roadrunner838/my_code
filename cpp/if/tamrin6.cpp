#include<iostream>//روزی ایام  هفته رو از کاربر به صورت متن دریافت کرده  و چندمین روز هفته بودن را مشخص کند.
using namespace std;

int main()
{
    string dayname;
    cout<<"enter the dayname:";
    cin>>dayname;
    if (dayname=="saturday")
   cout<<"1";

    else if (dayname=="sunday")
    cout<<"2";
       
    else if(dayname=="monday")
    cout<<"3";
        
    else if (dayname=="tuesday")
    cout<<"4";
       
    else if(dayname=="wednesday")
    cout<<"5";
     
    else if (dayname=="thursday")
    cout<<"6";
       
    else if (dayname=="friday")
    cout<<"7";
       
    else
    cout<<"The entered dayname is invalid.";
        
   
    return 0;
}
