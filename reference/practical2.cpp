#include <iostream>
using namespace std;

// Call by Value
void value(int x)
{
    x = x + 10;
    cout << "Call by Value: " << x << endl;
}

// Call by Address
void address(int *x)
{
    *x = *x + 10;
    cout << "Call by Address: " << *x << endl;
}

// Call by Reference
void reference(int &x)
{
    x = x + 10;
    cout << "Call by Reference: " << x << endl;
}

int main()
{
    int a = 10;

    cout << "Original value: " << a << endl;

    value(a);
    cout << "After Call by Value: " << a << endl;

    address(&a);
    cout << "After Call by Address: " << a << endl;

    reference(a);
    cout << "After Call by Reference: " << a << endl;

    return 0;
}