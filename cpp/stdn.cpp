#include<iostream>
#include<vector>
#include<algorithm>
#include <conio.h>
using namespace std;
class stdn{
  public:
float gread;
string name;
};
class student{
    private:
    vector<stdn>data;
    public:
    
  
      student(){
       
       stdn s;
       int i=0;
       
       while (true){
        ++i;
       cout<< "enter the name"<<i<<":";
       getline(cin,s.name);
        if(s.name=="exit")break;
        cout<<"enter the gread"<<i<<":";
       cin>>s.gread;
       cin.ignore();
        data.push_back(s);

           
       }
    }
    float GPA();
    void HighestGradePointAverage();
   void TheLowestGradePointAverage();
    void sortGread();
    void sortName();
    void print();
};

float student::GPA(){
  float sum =0.0 ;
  
  for (const auto& n: data )
sum+=n.gread;
float avg ;
if (!data.empty()){
 avg= static_cast <float> (sum)/data.size();
}
  return avg;
}

void student::HighestGradePointAverage(){
  stdn max =data[0];
  for(const auto& n: data){
    if(n.gread>max.gread)
    max=n;
   
  }
  cout<< "\n\n\n:HighestGradePointAverage:\t"<< max.name<<'\t'<<max.gread;
}
void student::TheLowestGradePointAverage(){
  stdn min =data[0];
  for(const auto& n: data){
    if(n.gread<min.gread)
    min=n;
   
  }
  cout<< "\n\n\nTheLowestGradePointAverage:\t"<< min.name<<'\t'<<min.gread;
} 


void student::sortGread(){

 sort(data.begin(),data.end(),[](stdn a, stdn b){
  return a.gread<b.gread;
 });
cout<< "\n\n\nSorted by score.";
cout<< "\n\n****List of students****\n";
for(const auto& n: data)
cout<< n.name<<'\t'<<n.gread<<endl;


  }
  void student::sortName(){

    sort(data.begin(),data.end(),[](stdn a, stdn b){
     return a.name<b.name;
    });
   cout<< "Sorted by name.";
   cout<< "\n\n****List of students****\n";
   for(const auto& n: data)
   cout<< n.name<<'\t'<<n.gread<<endl;
   
  
     }
     void student ::print(){
      cout<<"\n\n\n****List of students****\n";
      for (const auto& n: data)
      cout<<n.name<<'\t'<<n.gread<<endl;
     }


     int main(){
      student ob;
      int num ;
      do { 
        cout<<"\n\n*************************\n\n";
       cout<<"1.Show all students\n";
       cout<<"2.GPA\n";
       cout<<"3.HighestGradePointAverage\n";
       cout<<"4.TheLowestGradePointAverage\n";
       cout<<"5.sortGread\n";
       cout<<"6.sortName\n";
       cout<<"7.Exit the program\n";
       cout<<"your choice:";
       cin>>num;
       cout<<"\n\n\n\n";




        switch(num){
         
          case 1: ob.print();break;
          case 2:cout<<"\n\n\nGPA="<<ob.GPA();break;
          case 3:ob.HighestGradePointAverage();break;
          case 4:ob.TheLowestGradePointAverage();break;
          case 5:ob.sortGread();break;
          case 6:ob.sortName();break;
          case 7:cout<<"\n\nExit the program";break;
          default:cout<<"\n\nInvalid option";
        
        }
       
      } while(num!=7);
      getch();
      return 0;
     }



