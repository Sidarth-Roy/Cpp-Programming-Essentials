//Coding Exercise 18: Count of one.
#include<bits/stdc++.h>
using namespace std;

int countOfOne(vector<int> A) {
    int s,n,c;
    c=0;
    s=A.size();
    n=A[s-1];
    for(int i=0;i<s;i++)
    {
        if(A[i]==1)
        {
            c++;
        }
    }
    return c;
}
