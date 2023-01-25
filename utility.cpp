#include<iostream>
#include<vector>
#include<deque>
using namespace std;


void swap(int *a, int *b)
{

    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void print_arr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " , ";
    }
}