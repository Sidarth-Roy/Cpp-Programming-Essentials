//Coding Exercise 40: Find a number which is singly present.
#include<bits/stdc++.h>
using namespace std;


int singleFrequencyElement(vector<int> A) {
    //implement your code here
    int xorValue = 0;
    
    for (auto element : A) {
        xorValue = xorValue ^ element;
    }
    
    return xorValue;
}
