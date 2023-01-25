#include <iostream>
#include <math.h>
#include<vector>
using namespace std;


int binarylast(int arr[], int n , int key)
{

    int start = 0;
    int end = n;
    int mid = (start + end) / 2;
    int first = 0, last = 0;
    while (start <= end)

    {
        if (key == arr[mid] && arr[mid] == arr[mid + 1])
        {
            start = mid + 1;
        }
        if (key == arr[mid] && arr[mid] < arr[mid + 1])
        {
            last = mid;
            start = mid + 1;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        
        mid = (start + end) / 2;
    }
    
    
    

    ///////////////////////////////////////////////////////////////////////////////////////
    return last;
         
}

int binarysfirst(int arr[], int n, int key)
{
    int first=0;
    int start = 0;
    int end = n;
    int mid = (start + end)/2;
    while (start <= end)
    {
        if (key == arr[mid]&& arr[mid]== arr[mid-1])
        {
            end=mid-1;
            
            
        }
        if (key==arr[mid]&& arr[mid]>arr[mid-1])
        {
            first = mid;
            end=mid-1;
            
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
    return first;
}


int main()
{

    int arr[] = {0, 0, 1, 1, 2, 2, 2, 2};
    //    int a=  binarylast(arr, 2, 7);
    //     int b = binarysfirst(arr, 2, 7);
    //     cout <<b <<a;
    pair<int ,int >p;
    p.first= binarysfirst(arr, 7, 2);
    p.second = binarylast(arr, 7, 2);
    

    cout<<p.first<<p.second;
}