#include <iostream>
#include "utility.cpp"
using namespace std;
void bubble(int arr[], int n)
{

    for (int i = 0; i < (n - 1); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
        if (arr[i] <= arr[i + 1])
        {
            continue;
        }
    }
}

int main()
{
    int arr[] = {2, 6, 4, 6, 8};
    int n = 5;
    int ct = 5;
    for (int i = 0; i < (n - 1); i++)
    {
        bubble(arr, (n - i));
    }
    print_arr(arr, n);

    return 0;
}