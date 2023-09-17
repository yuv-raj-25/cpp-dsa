#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<int> st;
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout<<"Size: "<<st.size()<<endl;
    cout<<"Is Empty?: "<<st.empty()<<endl;

    cout<<"Printing stack values"<<endl

    return 0;
}