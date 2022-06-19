//Coding Exercise 26: Largest character.
#include<bits/stdc++.h>
using namespace std;

char largestFrequencyCharacter (char c[], int size) {
    int f=1, lf=0;
    char current=c[0];
    char ans;
    for(int i=1;i<size;i++)
    {

            if(current==c[i])
            {f++;
            if(f>lf)
            {
               lf=f;
              ans=current;
            }}
            if(c[i-1]!=c[i])
            {f=1;current=c[i];}
        }
    
    return ans;
}
