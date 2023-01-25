#include <iostream>
using namespace std;

int sqrt(int n)
{

    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (((mid) * (mid)) == n)
        {
            return mid;
        }
        if (((mid) * (mid)) < n)
        {
            start = mid + 1;
        }
        if (((mid) * (mid)) > n)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
}

float sqrt_pres(float n , float p){

        float temp= sqrt(n);
        float ans =temp;
        float factor = 1;
        
        for (float i = 0; i < p; i++)
        {
            
            factor = factor/10;
            for (float j = ans; j*j < n;j=j+factor )
            {
                
                
                
                ans = j;

                
                
            }
            
        }
        return ans;
        

}

int main()
{
    float b = sqrt_pres(17.0,2.0);
    cout << b;

    return 0;
}