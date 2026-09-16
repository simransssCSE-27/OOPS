#include<iostream>
using namespace std;

int value = 100;   // Global variable

int main()
{
    int value = 50;   // Local variable

    cout << "Local value = " << value << endl;
    cout << "Global value = " << ::value << endl;

    return 0;
}