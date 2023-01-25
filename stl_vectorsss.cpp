#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> b ;//vector with zero size 
    vector<int> c(5,1);// vector of capacity 5  and all initialied with 1
    b.push_back(2);
    cout<<b.capacity()<<endl;// use to print capacity of vector
    b.push_back(3);
    cout<<b.capacity()<<endl;
    b.push_back(4);
    cout<<"capacity is "<<b.capacity()<<endl;
    cout<<"size is "<<b.size()<<endl;
    vector<int> y (b);//we copying b into y
    // we can perform all array  operation here
    b.pop_back();
    for (int i:b)
    {
     cout<<i<<" ";
    }cout<<endl;
    
    
    return 0;
}