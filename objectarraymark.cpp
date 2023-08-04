#include<iostream>
using namespace std;
class marksheet
{ 
    int m,e,g,total,per;
    public:
    void setN()
    {
        cout<<"enter maths marks:";
        cin>>m;
        cout<<"enter eng marks:";
        cin>>e;
        cout<<"enter guj marks:";
        cin>>g;
        total=m+e+g;
        cout<<"total is:"<<total;
        per=(total*100)/300;
        cout<<"\nper is:"<<per;
    }
    void getN()
    {
        cout<<endl<<endl;
        cout<<"maths marks:"<<m<<endl;
        cout<<"eng marks:"<<e<<endl;
        cout<<"guj marks:"<<g<<endl;
        cout<<"total marks:"<<total<<endl;
        cout<<"per is:"<<per<<endl;
    }
};
int main()
{
     marksheet a[5];
     for(int i=0;i<1;i++)
     {
        a[i].setN();
     }
     for(int i=0;i<1;i++)
    {
        a[i].getN();
    }
}
