#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int b[]={1,2,3,4,5,6,7,8,9};

    for(int i=0;i<5;i++)
    {
       a[i]=11+i;
       cout<<"\n"<<a[i];
    }
    for(int i=0;i<9;i++)
    { 
       cout<<" \n"<<b[i];
    } 
 }