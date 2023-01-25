#include<iostream>
#include<math.h>
using namespace std;


int main(){

     int ans = 0;


        int arr1[]={1,2,2,2,3,4};
        int arr2[]= {2,2,3,3};
        for (int  i = 0; i < 6; i++)
        {
            ans = ans|arr1[i];
        }

        cout<<ans;
       for (int  i = 0; i < 4; i++)
        {
            ans = ans|arr2[i];
        }
        cout<<ans;




}