//Coding Exercise 45: Binomial Coefficient
#include<bits/stdc++.h>
using namespace std;

int C(int n, int k) {
    // DP solution
   if((n==1&&k==1)||(n==0&&k==0))
   {
       return 1;
   }
  return C(n-1,k-1)/(C(n-k,k-2)*C(k,k-1));

    return C()
}
