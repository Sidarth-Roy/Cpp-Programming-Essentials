//Coding Exercise 19: square root of a number.
#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n) {
    int result,i;
    result=1;
    i=1;
    if(n==0||n==1)
      return n;
    while(result<=n)
    {
        i++;
        result=i*i;
        if(result==n)
        {
            return i;
        }
    }

}
