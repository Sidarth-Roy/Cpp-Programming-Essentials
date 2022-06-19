//Coding Exercise 25: Sum of all diagonal elements
#include<bits/stdc++.h>
using namespace std;

int sumOfDiagonalElement(vector<vector<int>> A) {
    int size, sum=0;
    size=A.size();
    // if(size==0)
    // {
    //     return 0;
    // }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j)
            {
                sum+=A[i][j];
            }
            else if(i+j==size)
            {
                sum+=A[i][j];
            }
        }
    }
    // if(size%2!=0)
    // {sum-=A[(size+1)/2][(size+1)/2];
    // }
    return sum;
}
