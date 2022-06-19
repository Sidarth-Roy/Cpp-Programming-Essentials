//Coding Exercise 21: Sort an array !
#include<bits/stdc++.h>
using namespace std;

vector<int> sortTheArray(vector<int> A) {
    /*int index;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            if(A[i]>A[j])
            {
                index=j;
            }
        }
        int k=A[i];
        A[i]=A[index];
        A[index]=k;
    }
   return A;*/
   sort(A.begin(),A.end());
   return A;
}
