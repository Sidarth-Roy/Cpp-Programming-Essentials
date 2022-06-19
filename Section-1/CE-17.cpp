//Coding Exercise 17: Frequency of largest element.
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int frequencyOfLargestElement (vector<int> A) {
    int s, n, counter;
    counter=0;
    s=A.size();
    n=A[s-1];
    for(int i=0;i<s;i++)
    {
        if(A[i]==n)
        {
            counter++;
        }
    }
    return counter;
   
}
