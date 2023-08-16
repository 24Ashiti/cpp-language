#include<iostream>
#include<string.h>
using namespace std;

class customer
{
    public:
    string name,contact;
    void getdata()
    {
        cout<<"\n\t\t*****ZERO CAFE*****\n";
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your contact number: ";
        cin>>contact;
    }
    void showdata()
    { 
        cout<<"\n\t     Name            : "<<name<<endl;
        cout<<"\n\t     contact Number  : "<<contact<<endl;
    }
};
class showbill : public customer
{
    public:  

      double  GST  , Net_bill,bill_amt =0 ;
      int   Bill =0 , quty;

      string citems[5];

      int item1()
      {
        cout<<"\n\t enter quntity:";
        cin>>quty;
        citeam[0]="pizza = 450 ";
        return Bill = Bill + quty*450;
      }

      int item2()
      {
        cout<<"\n\t enter quntity:";
        cin>>quty;
        citeam[1]="pasta = 300 ";
        return Bill = Bill + quty*300;
      }

      int item3()
      {
        cout<<"\n\t enter quntity:";
        cin>>quty;
        citeam[2]="sandwich = 200 ";
        return Bill = Bill + quty*200;
      }

      int item4()
      {
        cout<<"\n\t enter quntity:";
        cin>>quty;
        citeam[3]="garlic bread = 250 ";
        return Bill = Bill + quty*250;
      }

      int item5()
      {
        cout<<"\n\t enter quntity:";
        cin>>quty;
        citeam[4]="coffee = 150 ";
        return Bill = Bill + quty*150;
      }
        
          double Show_Bill_Amt()
      { 
         
         return bill_amt = bill_amt + Bill;
      }

          double Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
      }

          double Show_Net_bill()
      {
        return Net_bill =   bill_amt +  GST ;
      }

      void Show_Net_Bill()
      {
            Show_bill_Items();
            cout<<"\n\t Total Order price  : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t GST                : "<<Show_GST()<<endl;
            cout<<"\n\t Net Bill iS        : "<<Show_Net_bill()<<endl; 
      }
         void Show_bill_Items()
      {

         int i ;

         for(i=0;i<5;i++)
         {
         if(!items[i].empty())
         {
            cout<<"\n\t "<<i+1<<":"<<items[i]<<endl;
         }
         }
      }
};
int main ()
{

     showbill a ;
     

        a.get_info();

        cout<<"\n\t\t\t :::::::::: Menu :::::::::: \n";
        cout<<" \n \t\t\t [1]  pizza         : RS. 450 /- "; 
        cout<<" \n \t\t\t [2]  pasta         : RS. 300 /- "; 
        cout<<" \n \t\t\t [3]  sandwich      : RS. 200 /- "; 
        cout<<" \n \t\t\t [4]  garlic bread  : RS. 250 /- ";
        cout<<" \n \t\t\t [5]  coffee        : RS. 150 /- \n";
        cout<<" \n \t\t\t  Confirm Your Order       [0]  \n";

        int i;

        do
        {
           cout<<"enter your choice:";
           cin>>i;
           switch(i)
           {
            case 1:
                  a.item1();
                  break;
            
            case 2:
                  a.item2();
                  break;

            case 3:
                  a.item3();
                  break;

           case 4:
                  a.item4();
                  break;

          case 5:
                  a.item5();
                  break;

          case 0:
          break;
          }

        }
        while (i!=0);
            
            a.showdata();
            a.Show_Net_bill();
}





   




