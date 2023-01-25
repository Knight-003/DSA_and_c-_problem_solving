#include <iostream>
#include"utility.cpp"

using namespace std;

int minimum(int arr[], int n, int initial)
{

    int min = initial;
    for (int i = initial; i < (n); i++)
    {

        if (arr[min] <= arr[i])
        {
           continue;
        }
        if (arr[min] > arr[i ])
        {
            min = i;
        }
    }
    return min;
}
// void swap(int *a, int *b)
// {

//     int t;
//     t = *a;
//     *a = *b;
//     *b = t;
// }

int main()
{

    int arr[] = {2,6,4,6,8};
    int n =5 ;

    for (int i = 0; i < (n - 1); i++)
    {
        int temp = minimum(arr, n, i);
        swap(arr[i], arr[temp]);
        for (int i = 0; i < 4; i++)
        {

            cout << arr[i] << " , ";
            
        }
        cout<<endl;
    }

    return 0;
}// generally used when array is small