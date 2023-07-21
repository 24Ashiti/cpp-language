#include<iostream>
using namespace std;
class area
{
    public:
    area(double r)
    {
        cout<<"circle area:"<<3.14*r*r<<endl;
    }
    area(int l)
    {
         cout<<"square area:"<<l*l<<endl;
    }
    area(int l,int b)
    {
         cout<<"rectangle area:"<<l*b<<endl;
    }
    area(double h,double b)
    {
        cout<<"triangle area:"<<h*b/2<<endl;
    }
};
int main()
{
    area a(10.3),b(20),c(10,20),d(11.2,20.2);
}