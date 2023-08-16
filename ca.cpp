#include<iostream>
#include<string.h>

using namespace std;

class customer
{
     public:
    string name, contact;
     void getdata()
     {
          cout<<"\n\t\t ********** ZERO CAFE ********** \n";
          cout<<"Enter your Name : ";
          cin>>name;
          cout<<"Enter your Contact Number : ";
          cin>>contact;
     }

     void showdata()
     {
          cout<<"\n\t Name               : "<<name<<endl;
          cout<<"\n\t Contact Number     : "<<contact<<endl;
     }

};
int main()
{ 
    customer c;
    c.getdata();
    c.showdata();
    int menu;
    int code,price,qty,tot;
    char mad;
    do
    {
       cout<<"\t\t\t\t***********ZERO CAFE*************"<<endl;
       cout<<"\n\t\t\t\t:::::::::: Menu :::::::::: \n";
       cout<<" \n \t\t\t [1] Pizza                : RS. 350 /- "; 
       cout<<" \n \t\t\t [2] sandwich             : RS. 200 /- "; 
       cout<<" \n \t\t\t [3] pasta                : RS. 270 /- "; 
       cout<<" \n \t\t\t [4] garlic bread         : RS. 200 /- ";
       cout<<" \n \t\t\t [5] Coffee               : RS. 250 /- \n";
       cout<<"enter your choice:";
       cin>>code;
       switch(code)
       {
        case 1:
            cout<<"pizza"<<endl;
            price=350;
            cout<<"enter amount:";
            cin>>qty;
            tot=price*qty;
            cout<<"total:"<<tot<<endl;
            cout<<"want more? y/n:";
            cin>>mad;
            break;
        case 2:
            cout<<"sandwich"<<endl;
            price=200;
            cout<<"enter amount:";
            cin>>qty;
            tot=price*qty;
            cout<<"total:"<<tot<<endl;
            cout<<"want more? y/n:";
            cin>>mad;
            break;
        case 3:
            cout<<"pasta"<<endl;
            price=270;
            cout<<"enter amount:";
            cin>>qty;
            tot=price*qty;
            cout<<"total:"<<tot<<endl;
            cout<<"want more? y/n:";
            cin>>mad;
            break;
        case 4:
            cout<<"garlic bread"<<endl;
            price=200;
            cout<<"enter amount:";
            cin>>qty;
            tot=price*qty;
            cout<<"total:"<<tot<<endl;
            cout<<"want more? y/n:";
            cin>>mad;
            break;
        case 5:
            cout<<"coffee"<<endl;
            price=250;
            cout<<"enter amount:";
            cin>>qty;
            tot=price*qty;
            cout<<"total:"<<tot<<endl;
            cout<<"want more? y/n:";
            cin>>mad;
            break;
            default:
                cout<<"the code dont exits";
               
       }

  }
  while(mad/='y');
  cout<<"thank you";
    return 0;

}