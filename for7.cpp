#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter num:";
    cin>>n;
    cout<<"even num:\n"<<n;
    for(i=1;i<n;i+=1)
    {
        if(i%2==0)
        {
            cout<<"\t"<<i;
        }
    }
}