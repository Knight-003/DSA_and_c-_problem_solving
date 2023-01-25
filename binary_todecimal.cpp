#include <iostream>

using namespace std;

int powers(int base, int power)
{

    int ans = 1;
    for (int i = 0; i <= power; i++)
    {
        if (i == 0)
        {
            ans = 1;
        }

        else if (i != 0)
        {
            ans = ans * base;
        }
    }
    return ans;
}

int main()
{

    int number, i = 0,z =0;
    cout << "please enter the number";
    cin >> number;
    int checker = number;
    int ans;
    int arr[500] = {2};
    cout<<arr[6];
    ans = 0;
    int arrr[]={2,2,2,2,2,2,2,2,2,2};
    
    if (checker == 0)
    {
        cout << 0;
    }
    if (checker < 0)
    {
        number = -number;
    }

    while (number != 0)
    {
        int digit = (number & 1);
        arr[i] = digit;

        int t = powers(10, i);

        ans = (digit * t) + ans;
        number = number >> 1;

        i = i + 1;
    }
     
    if (checker > 0)
    {
        cout << ans << endl;
    }
    

    