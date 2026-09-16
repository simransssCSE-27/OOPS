#include <iostream>
using namespace std;

template <typename... Args>
int sum(Args... args)
{
    return (args + ...);
}

int main()
{
    cout << " " << sum(10, 20) << endl;
    cout << " " << sum(10, 20, 30) << endl;
    cout << " " << sum(10, 20, 30, 40) << endl;
    cout << " " << sum(10, 20, 30, 40, 50) << endl;

    return 0;
}