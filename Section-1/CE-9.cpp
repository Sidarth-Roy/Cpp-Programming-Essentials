#include<bits/stdc++.h>
using namespace std;


int greatestCommonDivisor (int x, int y) {
    //implement your code here
    int n,ans;
    if(x==0)
       return ans=y;
    else if(y==0)
       return ans=x;
    else{
        if(x>y)
      n=y;
    else 
      n=x;

    for(int i=1;i<=n;i++){
        if((x%i==0)&&(y%i==0)){
            ans=i;
        }
    }
    return ans;
    }
}
