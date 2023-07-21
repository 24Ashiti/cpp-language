#include<iostream>
using namespace std;
class student
{
    private:
    int adminNo;
    char sname[20];
    float eng,maths,sci,total;
    float ctotal()
    {
        return eng+maths+sci;
    }

    public:
    void takedata()
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

        total = ctotal();
    }
    void showdata()
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
    s.takedata();
    s.showdata();
}