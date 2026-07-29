#include <bits/stdc++.h>
using namespace std;

class student{
    private:
        string name;
        int age;
        
    public:
    void setdata(string n,int a)
    {
        name=n;
        age=a;
    }
 };
 int main()
 {
    student s1;
    string name;
    int age;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    s1.setdata(name,age);
 }