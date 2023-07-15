#include<iostream>
using namespace std;
int main()
{
   int m[5],e[5],g[5],total,per;
   for(int i=0;i<5;i++)
   {
       cout<<"enter marks:";
       cin>>m[i];
       cin>>e[i];
       cin>>g[i];
       total=m[i]+e[i]+g[i];
       cout<<"total is:\n"<<total; 
       per=(total*100)/300;
       cout<<"per is:\n"<<per;
       if(per<=30)
       {
           cout<<"grade is: fail\n";
       }
       else if(per<=50)
       {
           cout<<"grade is:d\n";
       }
       else if(per<=70)
       {
           cout<<"grade is:c\n";
       }
       else if(per<=90)
       {
            cout<<"grade is:b\n";
       }
       else 
       {
           cout<<"grade is:a\n";
       }
   }
}    