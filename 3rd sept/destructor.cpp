#include <iostream>
using namespace std;

class student {
    string name ;
    public :
    student(string n) {
            name = n;
            cout << "Constructor called for " << name << endl;
        }
        ~student() {
            cout << "Destructor called for " << name << endl;
        }
} ;

int main() {
    cout << "--main begins--" << endl;
    student s1("John");
    student s2("Alice");
    cout << "--main ends--" << endl;
    return 0 ;
}