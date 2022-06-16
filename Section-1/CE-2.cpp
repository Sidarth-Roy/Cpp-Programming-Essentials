#include <iostream>
using namespace std;

int largest (int n, int arr[])
{
    int largest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}
