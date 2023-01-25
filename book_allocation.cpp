#include <iostream>
using namespace std;

bool possiblity_checker(int arr[], int key, int n, int std)
{

    int ans = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans + arr[i];
        if (ans > key)
        {
            i--;
            ans = 0;
            cnt = cnt + 1;
        }
        if (ans == key)
        {
            ans = 0;
            if (i != (n - 1))
            {

                cnt = cnt + 1;
            }
        }
    }

    if (cnt + 1 == std)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int max_page(int arr[], int n, int std, int sum)
{

    int start = 0;
    int end = sum;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        bool pos = possiblity_checker(arr, mid, n, std);
        if (pos == true)
        {
            end = mid - 1;
        }
        if (pos == false)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    // bool b = sum_of_array(arr,4);
    // cout << b;
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i];
    }
    int max = max_page(arr, 4, 2, sum);
    cout << max;

    return 0;
}