//Coding Exercise 23: Check whether product of elements are positive or negative.
#include<bits/stdc++.h>
using namespace std;

int checkProductSign(vector<vector<int>> matrix) {
    int product=1;

    for(int i=0;i<matrix.size();i++)
    {
        for(int c:matrix[i])
        {
            product*=c;
        }
    }
   if(product>=0)
     {
         return 1;
     }
     else
     return 0;
}
