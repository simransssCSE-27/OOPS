#include <iostream>
using namespace std;
class tracer {
    string name ;
    public :
    tracer(string t) :tag(t) {
        cout<< "+" << tag << endl;
       ~tracer()
        cout<< "-" << tag << endl;

};

int main()
