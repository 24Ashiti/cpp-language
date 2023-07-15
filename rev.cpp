#include<iostream>
using namespace std;
int main()
{
    char a[30];
    int i,j;

    cout<<"enter name:";
    cin>>a;
     i=0;
     while(a[i]!='\0')
     {
        i++;
     }
     j=i-1;
     while(j>=0)
     {
         cout<<""<<a[j];
         j--;
     }
}