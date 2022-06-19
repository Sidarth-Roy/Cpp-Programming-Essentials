//Coding Exercise 27: Largest frequency character.
#include<bits/stdc++.h>
using namespace std;

int largestFrequencyCharacter(char C[], int size) {
    //Method-1 to sort first then last questions algo
    //Method-2 
    int k;
    int lg=0;
    int ans;
    int arr[26]={0};
    for(int i=0;i<size;i++)
    {
        k=C[i]-97;
        arr[k]++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]>lg)
        {
            lg=arr[i];
            ans=97+i;
        }
    }
    return ans;
}
