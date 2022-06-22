//Coding Exercise 38: Divide a integer without Division operator
#include<bits/stdc++.h>
using namespace std;

int divide(int X, int Y) {
      //implement your code here
              int quotient = 0;
        while (X >= Y) {
            X = X-Y;
            quotient++;
        }
        return quotient;
}
