#include<iostream>
using namespace std;
class test
{
    int testcode,nocandidate,centerreqd,calcntr;
    char description[30];

    public:
    test()
    {
        cout<<"enter test code:";
        cin>>testcode;
        cout<<"description:";
        cin>>description;
        cout<<"NO.of nocandidate";
        cin>>nocandidate;
        calcntr=(nocandidate/100+1);
        centerreqd=calcntr;
        cout<<"center requried:"<<centerreqd; 
    }
    test(int t)
    {
        cout<<"test code:"<<testcode<<endl;
        cout<<"description"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"center requried:"<<centerreqd;
    }
};
int main()
{
    test t;
}