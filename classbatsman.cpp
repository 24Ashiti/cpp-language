#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode,inning,notout,runs,batavg;
    char bname [20];
    void calcavg()
    {
        batavg=runs/(inning-notout);   
    }
    public:
    void reddata()
    {
        cout<<"enter batsman code:";
        cin>>bcode;
        cout<<"enter batsman name:";
        cin>>bname;
        cout<<"enter played inning:";
        cin>>inning;
        cout<<"enter not out:";
        cin>>notout;
        cout<<"enter batsman run:";
        cin>>runs;
        calcavg();
    }
    void displaydata()
    {
        cout<<"batsman code"<<bcode<<endl;
        cout<<"batsman name"<<bname<<endl; 
        cout<<"batsman inning"<<inning<<endl;
        cout<<"batsman notout"<<notout<<endl;
        cout<<"batsman run"<<runs<<endl;
    }
};
int main()
{
    batsman b;
    b.reddata();
    b.displaydata();
}