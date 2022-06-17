//Coding Exercise 15: Kth smallest element in the array.
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int kthSmallest(int A[], int k, int sizeOfArray) {
    //implement your code here
    sort(A,A+sizeOfArray);
    for(int i=0;i<sizeOfArray;i++)
    {
        if(i==k-1)
        {
            return A[i];
        }
    }
}
