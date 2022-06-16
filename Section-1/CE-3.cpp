//Factorial of a Number
#include <iostream>
using namespace std;

int factorial (int n)
{
    int x=1;
    while(n>0){
        x*=n;
        n-=1;
    }
    return x;
}
