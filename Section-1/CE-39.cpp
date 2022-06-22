//Coding Exercise 39: Find square of a number without multiplication or divisor

#include<bits/stdc++.h>
using namespace std;

int square(int n) {
   //DP
      
    if (n == 0)
        return 0;
 
    int x = n >> 1;
 
    if (n & 1)
        return ((square(x) << 2) + (x << 2) + 1);
    else 
        return (square(x) << 2);
}
