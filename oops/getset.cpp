#include<bits/stdc++.h>
using namespace std;

class student 
{ private :
  string name ;
    int age , rollno ;
    int grade ;
   
    //function getter and setter 
    public :

    void setname(string s)
    {
        if (s.size()<1)
        {
            cout<<"isko name naa kende si" ;
            return ;}
        name=s ;
    }


     void setage(int a)
    {
        age=a ;
    }

    void getname()
    {
        cout<<name ;
    }

     void getage()
    {
        cout<<age ;
    }
};

int main()
{
student s1 ;
s1.setname("");
s1.setage(20);
s1.getname();
cout<<endl;
s1.getage();
}