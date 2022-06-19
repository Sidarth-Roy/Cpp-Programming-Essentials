//Coding Exercise 22: Number of zeros.
#include<bits/stdc++.h>
using namespace std;

int numberOfZeros(vector<vector<int>> matrix) {
    int cntr=0;
   for(int i=0;i<matrix.size();i++)
   {
       for(int x :matrix[i])
       {
           if(x==0)
             {cntr++;
             }
       }
   }
    return cntr;
}
