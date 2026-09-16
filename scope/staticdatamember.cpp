#include <bits/stdc++.h>
using namespace std;

class Test
{
public:
    static int number;   // Static data member
};

// Definition of static data member
int Test::number = 10;

int main()
{
    cout << "Value = " << Test::number << endl;
    return 0;
}