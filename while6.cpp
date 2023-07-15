#include<iostream>
using namespace std;
int main()
{
    char a=65,b=69;
    while(b<=69)
    {
        b=65;
        while(b<=a)
        {
            cout<<"\t"<<b;
            b++;
        }
        cout<<"\n";
        a++;
    }

}