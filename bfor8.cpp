#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char k='A';
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=69;j++)
        {
            cout<<"\t"<<k++;
        }
        cout<<"\n";
    }
}