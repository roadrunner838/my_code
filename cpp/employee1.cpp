#include<iostream>
using namespace std;
///////////////////////////////////////////////////////////////////
//تابع جابه جایی
void swap(string& n1, string& n2,string& l1,string& l2,int& i1,int& i2,int& a1,int &a2){
    string temp_n=n1;
    string temp_l=l1;
    int temp_i=i1;
    int temp_a=a1;
    n1=n2;  l1=l2;  i1=i2; a1=a2;
    n2=temp_n; l2=temp_l; i2=temp_i; a2=temp_a;
}
////////////////////////////////////////////////////////////////////
//تابع اضافه کردن
void add(string n[],string l[],int i[],int a[]){
    string  name;
    string lname;
    int id;
    int age;
    static int  j=0;
    cout<< "enter the name :";
    cin>>n[j];
    cout<< "enter the lastname :";
    cin>>l[j];
    cout<< "enter the age :";
    cin>>a[j];
    cout<< "enter the id :";
    cin>>i[j];
    j++;
}
///////////////////////////////////////////////////////////////////
//تابع نشان دادن
void show(string n[],string l[],int i[],int a[]){
    for(int j=0;j<100;j++){
        if(!n[j].empty()&& !l[j].empty()&& i[j] !=0 && a[j]!=0){
        cout<<"name="<<n[j]<<'\t'<<"lastname="<<l[j]<<'\t'<<"id="<<i[j]<<'\t'<<"age="<<a[j]<<endl;
        }
    }
}
/// //////////////////////////////////////////////////////
//تابع حذف کردن
void remove(string n[],string l[],int i[],int a[],int IR){
    for(int j=0;j<100;j++){
        if(i[j]==IR){
            n[j]="";
            l[j]="";
            i[j]=0;
            a[j]=0;
            cout<<"id="<<IR<<"\tIt was removed";

        }
    }
}
////////////////////////////////////////////////////////////
//تابع جستجو بر اساس آیدی
void serch(string n[],string l[],int i[],int a[],int ID){
    for(int j=0;j<100;j++){
        if(i[j]==ID){
            cout<<"name="<<n[j]<<'\t'<<"lastname="<<l[j]<<'\t'<<"id="<<i[j]<<'\t'<<"age="<<a[j]<<endl;

        }
    }
}
/////////////////////////////////////////////////////////////////////////
//تابع جستجو بر اساس اسم
void serchName(string n[],string l[],int i[],int a[],string name){
    int x=0;
    int indices[100];
    
    for(int j=0;j<100;j++){
        if(n[j]==name && !n[j].empty()){
           indices[x]=j;
           x++;
            
        }
    }
    if(x==1){
         int j=indices[0];
        cout<<"name="<<n[j]<<'\t'<<"lastname="<<l[j]<<'\t'<<"id="<<i[j]<<'\t'<<"age="<<a[j]<<endl;
    }
    else if(x>1){
        char choice;
        cout<<x<<"_"<<"There are so many of these names.\n\n\nDo you want me to show you?[y\\n]";
        cin>>choice;
        if(choice=='y'){
       for(int k=0;k<100;k++){
        int j=indices[k];
            cout<<"name="<<n[j]<<'\t'<<"lastname="<<l[j]<<'\t'<<"id="<<i[j]<<'\t'<<"age="<<a[j]<<endl;
                }
        }
        else{
            cout<<"thank you";
        }
    }
    else{
        cout<<"This name does not exist.";
    }
}
//////////////////////////////////////////////////////////////////////////////
//تابع مرتب سازی بر اساس اسم
void sortname(string n[],string l[],int i[],int a[],int size){
    
    for(int j=0;j<size-1;j++){
        for(int k=0;k<size-j-1;k++){
            if(n[k]>n[k+1] && !n[k].empty() && !n[k+1].empty()){
               swap(n[k],n[k+1],l[k],l[k+1],i[k],i[k+1],a[k],a[k+1]);
            }
        }
    }
}
///////////////////////////////////////////////////////////////////////////
//تابع مرتب سازی بر اساس فامیلی
void sortlastname(string n[],string l[],int i[],int a[],int size){
    
    for(int j=0;j<size-1;j++){
        for(int k=0;k<size-j-1;k++){
            if(l[k]>l[k+1] && !l[k].empty() && !l[k+1].empty()){
               swap(n[k],n[k+1],l[k],l[k+1],i[k],i[k+1],a[k],a[k+1]);
            }
        }
    }
}
//////////////////////////////////////////////////////////////////
//تابع مرتب سازی بر اساس  آیدی
void sortid(string n[],string l[],int i[],int a[],int size){
    
    for(int j=0;j<size-1;j++){
        for(int k=0;k<size-j-1;k++){
            if(i[k]>i[k+1] && i[k]!=0 && i[k+1]!=0){
               swap(n[k],n[k+1],l[k],l[k+1],i[k],i[k+1],a[k],a[k+1]);
            }
        }
    }
}

int main(){
    string name[100];
    string lname[100];
    int id[100];
    int age[100];
    int choice;
    int x=0;
    do{
        cout<<"*********menu************\n";
        cout<<"1-add\n";
        cout<<"2-show\n";
        cout<<"3-remove\n";
        cout<<"4-serch\n";
        cout<<"5-serchName\n";
        cout<<"6-sortName\n";
        cout<<"7-sortLastname\n";
        cout<<"8-sortID\n";
        cout<<"9_exit\n";
        cout<<"***************************\n";
        cout<<"choose :";
        cin>>choice;
        cout<<"****************************\n";
        switch(choice){
            case 1:{add(name,lname,id,age);
            x++;break;}
            case 2:show(name,lname,id,age);break;
            case 3:{int IR;
            cout<<"Enter the ID you want to remove :";
            cin>>IR;
            remove(name,lname,id,age,IR);break;}
            case 4:{
            int ID;
            cout<<"Enter the ID whose details you want to view :";
            cin>>ID;
            serch(name,lname,id,age,ID);break;}
            case 5:{
                string name1;
            cout<<"enter the name :";
            cin>>name1;
            serchName(name,lname,id,age,name1)
            ;break;
        }
            case 6: 
            {sortname(name,lname,id,age,x);
                break;}
            case 7:
            {sortlastname(name,lname,id,age,x);
                break;}
            case 8:
            {sortid(name,lname,id,age,x);
                break;}
            default:cout<<"Please enter the correct number.";
        }

    }while(choice!=9);

    
  return 0;
}