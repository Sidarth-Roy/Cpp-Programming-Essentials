//Coding Exercise 36: Count of set bit.
#include<bits/stdc++.h>
using namespace std;

int countSetBit(int n) {
    //implement your code here
    int cnt=0;
    while(n>0)
    {int last_bit=(n&1);
    cnt+=last_bit;
    n=n>>1;
    }
    return cnt;
}

