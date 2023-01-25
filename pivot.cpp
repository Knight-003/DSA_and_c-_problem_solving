#include <iostream>

using namespace std;

int pivot(int arr[], int n)
{

    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;
    int ans;
    while (s <= e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }

        else if (arr[mid] < arr[mid + 1] )
        {
            ans = mid; 
            e = e - 1;
        }
        else if (mid == (n-1)|| mid == 0)
        {
            ans = mid;
        }
        

        mid = s + (e - s) / 2;
    }
    return ans;
}


int pivot_2(int arr[], int n){


    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;
    int ans;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s= mid+1;

        }
        else{


            e = mid;

        }
        mid = s + (e - s) / 2;
        
    }
    return s;






}

int main()
{
     int arr[] = {7,9,1,2,3};
     int a = pivot(arr,5);
     cout<<a;



}