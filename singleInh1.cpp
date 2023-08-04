#include<iostream>
using namespace std;
class square
{
    public:
    int n;
    void hello()
    { 
        cout<<"enter n value:"<<endl;
        cin>>n;
    }
};
class dervied:public square
{
    public:
    int i;
    void test()
    {
       for(i=0;i<=n;i++)
       {
        cout<<"\t"<<i*i;
       }
    } 
};
int main()
{
    dervied d;
    d.hello();
    d.test();
}
