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

class Showbill : public customer 
{

    public:

      double  GST , Netbill,bill_amt=0 ;
      int   Bill=0 , quty;

      string items[5];

      int item1()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty;
         items[1] = "Pizza             = 350 ";
         return Bill = Bill + quty*350;
      }
      int item2()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         items[2] = "sandwich          = 200 ";
         return Bill = Bill + quty*200;
      }

      int item3()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         items[3] = "pasta             = 270";
         return Bill = Bill + quty*270;
      }

      int item4()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty;
         items[4] = "garlic bread      = 200";
         return Bill = Bill + quty*200;
       }

      int item5()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         items[5] = "Coffee            = 250";
         return Bill = Bill + quty*250;
      }


      double ShowBill_Amt()
      { 
         
         return bill_amt = bill_amt + Bill;
      }

      double Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
      }

      double ShowNet_bill()
      {
        return Netbill =   bill_amt +  GST;
      }
   


      void ShowNet_Bill()
      {
            Show_bill_Items();
            cout<<"\n\t Total Order price  : "<<ShowBill_Amt()<<endl;
            cout<<"\n\t GST                : "<<Show_GST()<<endl;
            cout<<"\n\t Net Bill iS        : "<<ShowNet_bill()<<endl; 
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
     Showbill s ;
        s.getdata();

        cout<<"\n\t\t\t :::::::::: Menu :::::::::: \n";
        cout<<" \n \t\t\t [1] Pizza                : RS. 350 /- "; 
        cout<<" \n \t\t\t [2] sandwich             : RS. 200 /- "; 
        cout<<" \n \t\t\t [3] pasta                : RS. 270 /- "; 
        cout<<" \n \t\t\t [4] garlic bread         : RS. 200 /- ";
        cout<<" \n \t\t\t [5] Coffee               : RS. 250 /- \n";
        cout<<" \n \t\t\t  Confirm Your Order       [0]  \n";

        int i;

        do
        {
         cout<<"\n Enter your choice : ";
         cin>>i;
        switch (i)
        {
        case 1: 
             s.item1();
            break;
        case 2: 
             s.item2();
            break;
        case 3: 
             s.item3(); 
            break;
        case 4: 
             s.item4();
            break;
        case 5: 
            s.item5();
            break;

         case 0: 
           break;
         }

       } while (i!=0);


            s.showdata();
            s.ShowNet_Bill();

}