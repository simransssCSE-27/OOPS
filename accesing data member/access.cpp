#include<iostream>
using namespace std;

class student
{
    int roll_no;
    public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }
    void get_roll_no()
    {
        cout<<"Roll No: "<<roll_no<<endl;
    }
};

int main()
{
    student s1;
    s1.set_roll_no(101);
    s1.get_roll_no();
    return 0;
}
