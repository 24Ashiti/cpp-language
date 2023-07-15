#include<iostream>
using namespace std;
int main()
{
    int a,n,total=0;
    cout<<"enter n:";
    cin>>n;
    for(a=1;a<=n;a+=2)
    {
        total+=a;
        cout<<"\t"<<a;
    }
     cout<<" total:"<<total;
}