#include<iostream>
using namespace std;
class test
{
    private:
    int testcode,nocandidate,centerreqd;
    char description[30];
    int calcntr()
    {
         return(nocandidate/100+1);
    }
    public:
    void schedual()
    {
        cout<<"enter test code:";
        cin>>testcode;
        cout<<"description:";
        cin>>description;
        cout<<"NO.of nocandidate";
        cin>>nocandidate;
        centerreqd=calcntr();
    }
    void disptest()
    {
        cout<<"test code:"<<testcode<<endl;
        cout<<"description"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"center requried:"<<centerreqd;
    }
};
int main()
{
    test a;
    a.schedual();
    a.disptest();
}