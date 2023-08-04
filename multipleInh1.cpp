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
class base2
{
  public:
  int i;
};
class dervied:public base1,public base2
{
    public:
    void test()
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
    d.test();
}
