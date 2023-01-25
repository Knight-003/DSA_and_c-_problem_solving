#include <iostream>
#include <math.h>
using namespace std;

int binarysearch(int arr[], int key, int n)
{

    int start = 0;
    int end = n;
    int mid = (start + end)/2;
    while (start <= end)

    {

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }                                                                    
        mid = (start + end)/2;
    }
    return -1;
}

int main()
{

    int arr[]= {9,1,2,3,7};
    int ans = binarysearch(arr, 1,4);
    cout<<ans;




}