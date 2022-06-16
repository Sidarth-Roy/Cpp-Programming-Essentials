#include<bits/stdc++.h>
using namespace std;

vector<int> printPrimes(int n) {
    vector<int>ans;
    int flag=0;
    if(n==1 || n==0)
    return ans;
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
               flag=1;
            }
        }
        if(flag==0)
        {ans.push_back(i);
        }
        flag=0;
    }

   return ans;
}
