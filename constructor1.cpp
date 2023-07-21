#include<iostream>
using namespace std;
class student
{
    int adminNo;
    char sname[20];
    float eng,maths,sci,total;

    public:
    student()
    {
        cout<<"enter adminNo:";
        cin>>adminNo;
        cout<<"enter name:";
        cin>>sname;
        cout<<"enter maths marks:";
        cin>>maths;
        cout<<"enter science marks:";
        cin>>sci;
        cout<<"enter english marks:";
        cin>>eng;
        total = eng+maths+sci;
        cout<<"total:"<<total<<endl;
    }
    student(int s)
    {
        cout<<"admin No:"<<adminNo<<endl;
        cout<<"student name:"<<sname<<endl;
        cout<<"maths marks:"<<maths<<endl;
        cout<<"science marks:"<<sci<<endl;
        cout<<"english marks:"<<eng<<endl;
        cout<<"total marks:"<<total<<endl;
    }
};
int main()
{
    student s;
}