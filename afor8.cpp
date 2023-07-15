#include<iostream>
using namespace std;
int main()
{
    int i,a=1,n;
    cout<<"enter num:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\t"<<a;
        a=a*2;
    }
}