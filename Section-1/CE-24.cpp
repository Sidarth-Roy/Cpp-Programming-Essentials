//Coding Exercise 24: Sum of even numbers.
#include <iostream>
using namespace std;

int sumOfEvenNumbers(int n, int m, int arr[1000][1000])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]%2==0)
            {
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}
