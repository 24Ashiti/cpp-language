#include<iostream>
using namespace std;
int main()
{
    char a,b,c=65;
    for(a=65;a<=69;a++)
    {
        for(b=65;b<=a;b++)
        {
            cout<<"\t"<<c++;
        }
        cout<<"\n";
    }
}