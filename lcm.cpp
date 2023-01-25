#include<iostream>
using namespace std;


void lcm (int arr[],int size,int n ){
    
    

}


int main (){


       int n; 
    cout<<"please enter a number";
    cin>>n;
    int lsm =1;
    
    int i =2;
    int arr[1000] = {0};
    while (n!=1)
    {
       if (n%i == 0){


        n = n /i;
        arr[i]=arr[i]+1;
        
           
       }
       i =i+1;
       if (n%(i-1)==0)
       {
        i=i-1;
       }
      
    }


    for (int i = 2; i < 1000; i++)
    {
        if (arr[i]==0)
       {
            continue;
       }
       cout<< "the power of " << i << " is "<< arr[i] << endl;

       
       lsm = lsm * i;
      

       
       


    
       
    }
    
   cout<<"the lcm is "<< lsm <<endl;


}