//Coding Exercise 13: Largest and Smallest Number.
#include<bits/stdc++.h>
using namespace std;


pair<int, int> largestAndSmallest(int A[], int sizeOfArray) {
        //implement your code here
        int s=A[0];
        int l=A[0];
        int ans[1];
        for(int i=1;i<sizeOfArray;i++)
        {
            if(s>A[i])
              s=A[i];
            if(l<A[i])
              l=A[i];
        }

        return make_pair(l,s);
}
