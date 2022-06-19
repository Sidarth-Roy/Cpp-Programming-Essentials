//Coding Exercise 28: Is character array sorted ?
#include<bits/stdc++.h>
using namespace std;


int isSorted(char C[], int size) {
    for(int i=0;i<size;i++)
    {
        if(C[i]<C[i-1])
        return 0;
    }
    return 1;
    
}
