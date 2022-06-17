//Coding Exercise 14: Median of sorted Array.
#include<bits/stdc++.h>
using namespace std;


int calculateMedian(int A[], int sizeOfArray) {
   /* int median;
    if(sizeOfArray%2==0)
    {
        median=A[sizeOfArray/2];
    }
    else{
        median=((A[(sizeOfArray-1)/2]+A[(sizeOfArray+1)/2])/2);
    }
    return A[median];
    */
    int middle = sizeOfArray%2 ==0? sizeOfArray/2 - 1: sizeOfArray/2;

    return A[middle];
}
