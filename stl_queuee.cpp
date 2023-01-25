#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> qw;//follows the principle of like student in queue random access is not possible or also not possible to accesss from front
    qw.push(1);
    qw.push(2);
    qw.push(3);
    cout<< qw.front();
    qw.pop();
    cout<< qw.front()<<endl;
    ///////////////////////////////////////////////priroty queue//////////////////////////////////////////////////////////


    priority_queue<int> mixi; // uses max heap

    priority_queue<int , vector<int> , greater<int>> mini;// uses min heap  it always gave min output // similarily for max heap

    mixi.push(1);
    mixi.push(2);
    mixi.push(3);
    mixi.push(4);
    int n=mixi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<mixi.top()<<" ";
        mixi.pop();

    }cout<<endl;

    





    
    return 0;
}