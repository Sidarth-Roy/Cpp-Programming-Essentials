#include<bits/stdc++.h>
using namespace std;


int is_prime(int n) {
    //implement your code here]
    if(n==1)
    {
        return false;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
