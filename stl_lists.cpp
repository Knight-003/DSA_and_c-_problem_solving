#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l(5,0);
    l.push_back(5);
    l.push_front(9);//in this direct access is not possible 
    l.push_front(8);
    l.push_back(7);
    for (int i:l)
    {
     cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    for (int i:l)
    {
     cout<<i<<" ";
    }cout<<endl;
    
    

    
    return 0;
}