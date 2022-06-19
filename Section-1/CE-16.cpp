//Coding Exercise 16: Find the element in the array.
#include<bits/stdc++.h>
using namespace std;

int elementPresentOrNot(vector<int> array, int element) {
    int s,e,x;
    s=0;
    e=array.size();
    do{
        x=(s+e)/2;
        if(array[x]==element)
         return 1;
        else if(array[x]<element)
          s=x+1;
        else
          e=x-1;
       }while(s<e);
        return 0;
}
