#include <iostream>
#include <string>
using namespace std;

class calculator
{
public:
    int add(int a, int b)
    {
        cout << "int version : " << a + b << endl;
        return a + b;
    }

    double add(double a, double b)
    {
        cout << "double version : " << a + b << endl;
        return a + b;
    }

    int add(int a, int b, int c)
    {
        cout << "int version with 3 parameters : " << a + b + c << endl;
        return a + b + c;
    }

    string add(string a, string b)
    {
        cout << "string version : " << a + b << endl;
        return a + b;
    }
};

int main()
{
    calculator c1;

    cout << c1.add(10, 20) << endl;
    cout << c1.add(10.5, 20.5) << endl;
    cout << c1.add(10, 20, 30) << endl;
    cout << c1.add("Hello", "World") << endl;

    return 0;
}