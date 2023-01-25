#include<iostream>
#include<deque>
using namespace std;


int main()
{
    deque<int> b ;//in this we can perform operation from both ends front and back and random access possible it dosnt use contagious memory location.
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    for (int i:b)
    {
     cout<<i<<" ";
    }cout<<endl;
    b.push_front(9);
    for (int i:b)
    {
     cout<<i<<" ";
    }cout<<endl;

    b.erase(b.begin(),b.begin()+1);
    
    for (int i:b)
    {
     cout<<i<<" ";
    }cout<<endl;
    b.erase(b.end()-1,b.end());
    for (int i:b)
    {
     cout<<i<<" ";
    }cout<<endl;
    cout<<b.at(2);
    b.at(2)=8;
    cout<<b.at(2);


    return 0;
}