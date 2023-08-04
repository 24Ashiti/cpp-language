#include<iostream>
using namespace std;
class base1
{
    public:
    int n;
    void seta()
    {
     cout<<"enter  n value:";
     cin>>n;
    } 
};
class test:public base1
{
  public:
  int i;
};
class dervied:public test
{
    public:
    void product()
    {
       for(i=0; i<=n; i++)
       {
         cout<<"\t"<<i*i<<endl;
       } 
    }
};
int main()
{
    dervied d;
    d.seta();
    d.product();
}   
