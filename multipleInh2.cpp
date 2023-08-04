#include<iostream>
using namespace std;
class base1
{
 public:
 int n,total=1;
 void seta()
   {
     cout<<"enter n value:";
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
      {  
          for(int i=n; i>1; i--)
            {
               total=total*i;
            }   
          cout<<"factorial is:"<<total;
      }
    }
};
int main()
{
     dervied d;
     d.seta();
     d.test();
}