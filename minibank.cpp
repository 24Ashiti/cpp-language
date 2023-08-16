#include<iostream>
using namespace std;
class bank
{
    public:
    int balance=0,damt,wamt;
    void deposit()
    {
        cout<<"enter amount deposit:";
        cin>>damt;
        balance=balance+damt;
        cout<<"your depsoited amount:"<<damt<<endl;
    }

    void withdraw()
    {
        cout<<"enter amount withdraw:";
        cin>>wamt;
        if(balance<wamt)
        {
            cout<<"not enough balance"<<endl;;
        }
        else
        {
            balance=balance-wamt;
            cout<<" withdrawal balance is:"<<wamt<<endl;
        }
    }

    void showbalance()
    {
        cout<<"total balance is:"<<balance<<endl;;
    }
};

int main()
{
    bank b;
    int choice;
    cout<<"1. deposit"<<endl;
    cout<<"2. withdraw"<<endl;
    cout<<"3. show balance"<<endl;
    cout<<"4. end"<<endl;

    do
    {
        cout<<"enter choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
       b.deposit();
        break;

        case 2:
        b.withdraw();
        break;

        case 3:
        b.showbalance();

        case 4:
        break;

        default:
        cout<<"wrong choice"<<endl;
        }

    }while(choice!=4);
}
             