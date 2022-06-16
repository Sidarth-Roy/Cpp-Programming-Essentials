#include<bits/stdc++.h>
using namespace std;


int factorial(int n) {
    //implement your code here
    int ans=1;
    while(n>0)
    {
        ans*=n;
        n-=1;
    }
    return ans;
}
