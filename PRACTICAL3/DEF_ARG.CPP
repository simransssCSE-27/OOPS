#include <iostream>
using namespace std;

// Default argument
int add(int x, int y = 10)
{
    return x + y;
}

int main()
{
    cout << add(5) << endl;      // y = 10
    cout << add(5, 15) << endl;  // y = 15

    return 0;
}