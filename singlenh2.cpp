#include<iostream>
using namespace std;
class factorialno
{
    public:
    int n,total=1;
    void hello()
    {
        cout<<"enter n value:"<<endl;
        cin>>n;
    }
};
class dervied:public factorialno
{
    public:
    int i;
    void test()
    {
        {
            for(i=n;i>1;i--)
            {
                total=total*i;
            }
        }
        cout<<"factorial "<<total<<endl;
    }
};
int main()
{
    dervied d;
    d.hello();
    d.test();
}