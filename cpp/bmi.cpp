#include <iostream> 
#include<cmath>
using namespace std; 


int main ()  {
    int weight;
    double height;
    string name ;
    cout << "Please enter your name:";
    cin >> name ;

    cout << "Please enter your weight (in kilograms):";
    cin >> weight ;

    cout << "Please enter your height (in centimeters):";
    cin >> height;
     
     double x; 
     x= height/100;
     double y;
     y= pow(x,2);
     
     double bmi;
     bmi= weight/y;
     


    if (bmi<18.5){
        cout <<" hi,"<<name<< "\tYour body mass index\t"  <<bmi <<  "\tYou are underweight";
    }
    else if (18.5<=bmi && bmi<=24.9){
        cout<<" hi,"<<name<< "\tYour body mass index\t"  <<bmi <<  "\tYour weight is normal";
    }
    else if (25<=bmi && bmi<=29.9){
        cout<< " hi,"<<name<< "\tYour body mass index\t"  <<bmi <<  "\tYou are overweight";
     }
    else if (30<=bmi && bmi<=34.9){
        cout<< " hi,"<<name<< "\tYour body mass index\t"<<bmi <<"\tYou are obese";
     }
    else if (35<bmi)  {
       cout<< " hi,"<<name<< "\tYour body mass index\t"<<bmi <<"\tYou are severely obese";
     }

    return 0;
}