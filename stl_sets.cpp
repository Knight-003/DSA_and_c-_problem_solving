#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <int> st;
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    for (auto i :st)
    {
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = st.begin();
    it++;
    st.erase(it);
    for (auto i :st)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<st.count(-5)<<endl;//it return bool wheather element present or not
    set<int>:: iterator its = st.find(1);
    auto hh = its;
    printf("%x",hh);

    
    return 0;
}