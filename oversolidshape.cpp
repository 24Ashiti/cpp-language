#include<iostream>
using namespace std;
class solidshape
{
    public:
    solidshape(int a)
    {
        cout<<"cube:"<<a*a*a<<endl;
    }
    solidshape(double r)
    {
         cout<<"sphere:"<<4/3*3.14*r*r*r<<endl;
    }
    solidshape (int r,int h)
    {
         cout<<"cyclinder:"<<3.14*r*r*h<<endl;
    }
    solidshape(double a,double h)
    {
        cout<<"square pyaramid:"<<a*a*h/3<<endl;
    }
};
int main()
{
    solidshape a(10),b(20.2),c(10,20),d(11.2,20.2);
} 