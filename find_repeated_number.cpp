#include<iostream>
#include<math.h>
#include<array>
using namespace std;


int main(){

    int ans = 0;
        int arrr[]={1,2,3,4,3};
       for (int i = 0; i < 5; i++)
       {
         ans= ans^arrr[i];
        




       }
       for (int i = 1; i <5; i++)
       {
         ans = ans ^ i;
       }
       cout<<ans;
       
       
     

}