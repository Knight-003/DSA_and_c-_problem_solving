#include<iostream>

using namespace std;

void swap(int *num1 ,int*num2){

    int t ;
    t =*num1;
    *num1 = *num2;
    *num2 = t;
    

}


int main (){
    int size;
    int arr[]={1,2,3,4,5};
    int index = 3;
    int n =5;
    for (int i = 0; i < n; i++)
    {
        
        
        swap(arr[i],arr[n-i]);



    }
    cout<<arr[2];
    
    
  
   
    




}