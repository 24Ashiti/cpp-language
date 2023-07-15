#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n,i;
    cout<<"enter the num:";
    cin>>n;
    for(i=3;i<=n;i++)
    {
        c=a+b;
        cout<<"\t"<<c;
        a=b;
        b=c;
    }
}