#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;


int max_of(int arr[], int size){
    int a = 0;
    for (int i = 0; i < size; i++)
    {
        if (i==0)
        {
           a=arr[i]; 
        }
        
       else if (arr[i]>=arr[i-1])
       {
         a=arr[i];
         
       }
       
    }
    
    return a;

}
int max_of2(int arr[],int size ){

    int a= INT32_MIN ;
    for (int i = 0; i < size; i++)
    {
        a = max(  a , arr[i]);
    }
    return a;

}

int main(){
    int arrr[52]={2};
    // here every value of array started with 1
    // in case of 0
    // int ss[2]={0};
    int arr[6]={4,2,1,5,6,7} ;

    int max = max_of(arr , 6);

    
    cout<<"max no. is"<<max;





}