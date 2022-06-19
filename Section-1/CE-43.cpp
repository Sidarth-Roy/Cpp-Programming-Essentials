//Coding Exercise 43: Sum of digits
#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n) {
    //implement your code here
    if(n==0)
    {
        return 0;
    }
    int k=n%10;
    return k+sumOfDigit(n/10);
}
