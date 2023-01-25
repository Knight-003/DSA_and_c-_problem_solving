#include<iostream>



using namespace std;

int otherway(int arr[],int size){
    int ans =0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];// it is xor
    }
    

}


int main (){







    int count=0 ;
    int n = 7;
    int arr[n]={3,7,2,2,7,3,4};

    for (int i  = 0; i < n; i++)
    {

        
        for (int j  = (i); j < n; j++)
        {
            
            if (arr[i]==arr[j])
            {
                
                continue;
                
            }
            
            else if(arr[i]!=arr[j]){
               

                count = arr[i];
            }

            
          

            
        }
        
    }



    cout<<endl<<count;
    









}