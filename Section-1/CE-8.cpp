#include<bits/stdc++.h>
using namespace std;

int power(int x, int y) {
    //implement your code here
    int ans=1;
    for(int i=0;i<y;i++)
    {
        ans*=x;
    }
    return ans;
}
