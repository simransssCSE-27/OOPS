#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    string rollno;
    int marks;

    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollno;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollno << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student s;

    s.getdata();
    s.display();

    return 0;
}
