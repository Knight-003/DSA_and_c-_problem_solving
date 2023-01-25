#include<iostream>
#include <math.h>
using namespace std;


int power(int n){
    int cnt=0;
    while (n!=1)
    {
        
       if (n%2==0)
       {
        n=n/2;
        cnt = cnt+1;
        
       }
       else {

        cout<<"this number is not totaly represented in the form of 2 power n"<<endl;

       }
       
       
    }
    return cnt;

}


int main (){



    int num , powr;

    cin>>num;
    powr = power(num);
    cout<<"the power of 2 is"<<powr;
    



}