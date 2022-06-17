//find Missing number.
#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(int A[], int sizeOfArray) {
    //implement your code here
    if(sizeOfArray==0)
      return 1;
    int x=1;
    sort(A,A+sizeOfArray);
    for(int i=0;i<sizeOfArray;i++)
    {
        if(A[i]!=x)
        {
            return x;
        }
        x++;
    }
}
