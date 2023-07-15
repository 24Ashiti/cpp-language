#include<iostream>
using namespace std;
int main()
{
    int a,b;
    for(a=1;a<=9;a+=2)
    {
        for(b=1;b<=9;b+=2)
        { 
            cout<<"\t"<<a;
        }
        cout<<"\n";
    }
}