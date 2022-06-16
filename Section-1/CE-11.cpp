#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int x=1;
    while(n>0){
        x*=n;
        n-=1;
    }
    return x;
}


int nCr (int n, int r) {
    //implement your code here
    int ans;
    ans=factorial(n)/(factorial(n-r)*factorial(r));
    return ans;
    
}
