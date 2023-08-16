#include<iostream>
using namespace std;
class base
{
    public:
    int i,n;
    void setn()
    {
        cout<<"enter n value:";
        cin>>n;
    }
};
class table:public base
{
    public:
    void sett()
    {
        for(int i=1; i<=10; i++)
        {
            cout<<n<<"*"<<i<<":"<<i*n<<endl;
        }
    }
};
class reverse:public base
{
    public:
    void setr()
    {
        for(int i=n; i>=1; i--)
        {
            cout<<" "<<i<<endl;
        }
    }

};
int main()
{
   table t;
   t.setn();
   t.sett();

   reverse r;
   r.setn();
   r.setr();

}