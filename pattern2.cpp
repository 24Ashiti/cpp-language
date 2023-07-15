#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    for(a=1;a<=5;a++)
    {
       for(b=5;b>=a;b--)
       {
        cout<<" ";
       }
       for(c=1;c<=(2*a)-1;c++)
       {
        cout<<"*";
       }
       cout<<"\n";
    }
}