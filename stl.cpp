#include<iostream>
#include<array>
#include<vector>
using namespace std;


int main()
{
    array<int,4> hello = {1,2,3,4};// this works same as normal array works
    
    cout<<"the element at 2nd index is "<<hello.at(2)<<endl;
    cout<<hello.empty()<<endl;
    cout<<hello.back()<<endl;
    cout<<hello.front()<<endl;
    cout<<hello.end()<<endl;
    hello.at(2)=8;
    cout<<hello.at(2);

    
    return 0;
}