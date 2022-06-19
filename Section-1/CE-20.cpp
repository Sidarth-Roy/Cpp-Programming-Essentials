//Coding Exercise 20: Count of one in an array.
#include<bits/stdc++.h>
using namespace std;

int numberOfOne(vector<int> A) {
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
