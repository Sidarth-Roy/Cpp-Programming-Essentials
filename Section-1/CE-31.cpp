//Coding Exercise 31: Is String a palindrome?
#include<bits/stdc++.h>
#include<string>
using namespace std;

int isPalindrome(string s) {
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return 0;
        }
    }
    return 1;
    
}
