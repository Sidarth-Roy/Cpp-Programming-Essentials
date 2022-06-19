//Coding Exercise 41: Fibonacci number
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    //implement your code here
    if(n==0|| n==1)
    {
        return 1;
    }
    // int f1=fibonacci(n-1);
    // int f2=fibonacci(n-2);
    return fibonacci(n-1)+fibonacci(n-2);
}
