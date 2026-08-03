//Inline function is a function in which the compiler replace the function call with the actual code of the function during compilation. 
#include <iostream>
using namespace std;

inline int add(int a, int b)

{
    return a + b;
}

int main()

{

cout<<add(10,20);
return 0;

}
//ADVANTAGES: fast , improves performace,very usefull for small functions
//DISADVANTAGES: increaes executable size , compiler may ignore inline request for large and complex functions
