//Coding Exercise 34: Given string can be formed or not ?
#include<bits/stdc++.h>
using namespace std;

int canBeFormedOrNot(string s1, string s2) {
    // int arr[s2.size()]={0};
    // for(int i=0;i<s2.size();i++)
    // {
    //     for(int j=0;j<s1.size();j++)
    //     {
    //         if(s1[j]==s2[i])
    //         {
    //             arr[i]++;
    //         }
    //     }
    // }
    // for(int i=0;i<s2.size();i++)
    // {
    //     if(arr[i]==0)
    //     {
    //         return 0;
    //     }
    // }
    // return 1;
    int k;
    int arr1[26]={0};
    int arr2[26]={0};
    int ss1=s1.size();
    int ss2=s2.size();
    for(int i=0;i<ss1;i++)
        {k=s1[i]-'a';
        arr1[k]++;
        }
    for(int i=0;i<ss2;i++)
        {k=s2[i]-'a';
        arr2[k]++;
        }
    for(int i=0;i<26;i++)
    {
        if(arr1[i]<arr2[i])
        {
            return 0;
        }
    }
    return 1;
        
}
