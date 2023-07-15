#include<iostream>
using namespace std;
int main()
{
    int a;
    int sum=0;
    for(a=1;a<=10;a++)
    {
        sum=sum+a;
        cout<<"\t"<<a;
    }
     cout<<"your sum:\t"<<sum;
}