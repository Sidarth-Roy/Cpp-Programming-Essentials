#include<bits/stdc++.h>
#include <sstream>

using namespace std;


int binary_to_decimal(string binaryInteger) {
    //implement your code here
    int bn=stoi(binaryInteger);
    int ans=0;
    int p=1;
    while(bn>0)
    {
    ans+=(p*(bn%10));
    p*=2;
    bn/=10;
    }
    return ans;
}
