//Coding Exercise 29: Count of unique characters
#include<bits/stdc++.h>
using namespace std;

int countOfDifferentCharacters(char C[], int size) {
    // unordered_map < char, int > freq;
    
    // for (int i = 0; i < size; i++) {
    //     freq[C[i]]++;
    // }
    
    // return freq.size();
    
        int arr[26]={};
        int k,cntr;
        cntr=0;
        for(int i=0;i<size;i++)
        {
            k=C[i]-'a';
            arr[k]++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]>0)
            {
                cntr++;
            }
        }
        return cntr;

}
