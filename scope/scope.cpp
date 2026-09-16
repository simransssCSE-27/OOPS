#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    void input();
    void display();
};

// Function definition outside the class
void Student::input()
{
    cin >> name >> age;
}

void Student::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}