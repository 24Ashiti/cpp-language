#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c=65,d=1;
    char i;
    while(a<=5)
    {
        b=1;
        while(b<=a)
        {
            if(d%2==0)
            {
                i=c+32;
                cout<<"\t"<<i;
            }
            else
            {
                cout<<"t"<<c;
            }
            c++;
        }
        d++;
        cout<<"\n";
    }
}