#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1;
    while(a<=5)
    {
        b=1;
        while(b<=a)
        {
            cout<<" "<<b;
            b++;
        }
            cout<<"\n";
            a++;
    }
}