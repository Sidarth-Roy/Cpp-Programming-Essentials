//Coding Exercise 35: Sum of all elements below main diagonal.
#include<bits/stdc++.h>
using namespace std;


int sumOfElement(vector<vector<int>> matrix) {
    int ans=0;
    int n=matrix.size();
    if(matrix.size()<2)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(i+j<i+i)
            ans+=matrix[i][j];
        }
    }
    return ans;
}
