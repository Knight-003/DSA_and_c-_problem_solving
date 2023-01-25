#include<iostream>
#include<stack>
using namespace std;

int main()
{

    //which goes last came out first 
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(5);
    cout<<st.top();
    st.pop();
    cout<<st.top();
   






    
    return 0;
}