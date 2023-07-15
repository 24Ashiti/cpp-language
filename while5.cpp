 #include<iostream>
 using namespace std;
 int main()
 {
     int a=5,b=5;
     while(a>=1)
     {
        b=5;
        while(b>=a)
        {
            cout<<"\t"<<b;
            b--;
        }
        cout<<"\n";
        a--;
     }
 }