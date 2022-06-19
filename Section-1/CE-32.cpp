//Coding Exercise 32: Largest Frequency character
#include<bits/stdc++.h>
using namespace std;


char largestFrequencyCharacter(string s) {
    int k;
    int lg=0;
    int arr[26]={0};
    char ans;
     for(int i=0;i<s.size();i++)
     {
         k=s[i]-'a';
         arr[k]++;
     }
     for(int i=0;i<26;i++)
     {
         if(lg<arr[i])
         {
             lg=arr[i];
             ans=i+'a';
         }
     }
     return ans;
}
