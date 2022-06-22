// Coding Exercise 37: Power of two.
#include<bits/stdc++.h>
using namespace std;

int isPowerOfTwo(int n) {
    //implement your code here
    if(n&(n-1))
    {
        return 0;
    }
    else{
        return 1;
    }
}
