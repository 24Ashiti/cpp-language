#include<iostream>
using namespace std;
class solidshape
{
    public:  
    int test(int a)
    {
        return a*a*a;
    }
    double test(double r)
    {
        return 4/3*r*r*r;
    }
    int test(int r,int h)
    {
        return 3.14*r*h;
    }
    double test(double a,double h)
    {
        return a*a*h/3;
    }
};  
int main()
{
    solidshape s;
    cout<<"cube of is:"<<s.test(3)<<endl;
    cout<<"sphere of is:"<<s.test(3.2)<<endl;
    cout<<"cylinder of is:"<<s.test(3,2)<<endl;
    cout<<"square pyaramid of is:"<<s.test(3.2,2.3)<<endl;
}