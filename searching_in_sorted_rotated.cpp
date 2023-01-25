#include <iostream>

using namespace std;
int pivot_2(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {

            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int search(int arr[], int n, int key)
{

    int piv = pivot_2(arr, n);

    int start = 0;
    int end = n-1;
    

    if (key > arr[0])
    {
        end = piv - 1;
        
    }
   else if (key < arr[0])
    {
        start = piv;
        
    }
    else if (key == arr[0])
    {
        return 0;
    }
    
    
    
    int mid = start + (end - start) / 2;
    

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
        mid = start + (end - start) / 2;
        
        
    }
    return -1;
    
}

int main()
{
    int arr[] = {7, 9, 1, 2, 3};
    int b = search(arr , 5,3);
    cout<<b;

    

    return 0;
}