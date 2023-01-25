#include<iostream>
using namespace std;

int main (){

    
    char c;
    int inp;
    cin>>c;
    inp = int(c);
    cout<<inp;
    

    if (65<= inp && inp <=90)
    {
        printf("this is upper case");
    }
    if (97<= inp && inp <=122)
    {
        printf("this is lower case");
    }
    if (48<= inp && inp <=57)
    {
        printf("this is number case");
    }
    


   



}