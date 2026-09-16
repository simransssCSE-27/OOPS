#include <bits/stdc++.h>
using namespace std;

// Creating a namespace
namespace MyNamespace
{
    int number = 100;

    void display()
    {
        cout << "Welcome to my namespace" << endl;
    }
}

int main()
{
    // Accessing namespace data member
    cout << "Number = " << MyNamespace::number << endl;

    // Accessing namespace function
    MyNamespace::display();

    return 0;
}