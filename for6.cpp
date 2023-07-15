#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter num:";
    cin>>n;
    cout<<"odd num:\n"<<n;
    for(i=1;i<=n;i+=2)
    {
        cout<<"\t"<<i;
    }
}