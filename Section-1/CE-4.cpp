#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int n) {
     // implement your code here
     int x=0;
     while(n>0)
     {
         x+=n%10;
         n/=10;
     }
     return x;
     
}
