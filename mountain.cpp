#include <iostream>
using namespace std;

int peak(int arr[], int n)
{

    int start = 0;
    int end = (n - 1);
    int mid = start + ((end - start) / 2);
    int ans;
    while (start < end)
    {

        if (arr[mid] > arr[mid + 1])
        {
            ans = mid;
            end = mid - 1;
            
        }

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }

    return ans;
}

int main()
{

    int arr[] = {3,4,5,1};
    int a = peak(arr, 4);
    cout << arr[a];
}