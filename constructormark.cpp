#include<iostream>
using namespace std;
class marks
{
    int m,g,e,total,per;
    public:
    marks()
    {
       cout<<"enter maths marks:";
       cin>>m;
       cout<<"enter guj marks:";
       cin>>g;
       cout<<"enter eng marks:";
       cin>>e;
       total=m+g+e;
       cout<<"total:"<<total<<endl;
       per=(total*100)/300;
       cout<<"per:"<<per<<endl;
    }
    marks(int m)
    {
        cout<<"maths marks:"<<m<<endl;
        cout<<"guj marks:"<<g<<endl;
        cout<<"eng marks:"<<e<<endl;
        cout<<"total marks:"<<total<<endl;
        cout<<"per:"<<per<<endl;
    }
}; 
int main()
{
    marks m;

}