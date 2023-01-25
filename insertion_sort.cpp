#include <iostream>
// ##################################################it is insertion sort
using namespace std;
#include "utility.cpp"
void shifter(int arr[], int active_element, int chain_init)
{

    int temp = arr[active_element];

    for (int i = (active_element); i > chain_init; i--)
    {
        arr[i] = arr[(i)-1];
    }
    arr[(chain_init)] = temp;
}
void selection_sort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[i] < arr[j] && arr[i] > arr[(j - 1)])
            {
                shifter(arr, i, j);
            }
        }
    }
}
void selection_sort_2(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        
        int temp = arr[i];
        int j = (i - 1);
        for (; j >= 0; j--)
        {
            if (temp< arr[j])
            {
                arr[j+1]=arr[j];
               
            }
            else{

                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int arr[] = {2, 3, 8, 5, 4, 9};
    selection_sort_2(arr, 6);
    print_arr(arr, 6);

    return 0;
}