#include<iostream>
#include<stack>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;

    Stack(int s){
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int x){
        if(top == size){
            cout<<"Stack is Full"<<endl;
        }
        arr[++top] = x;
    }
};


int main(){

    // stack<int> st;
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // st.push(6);

    // cout<<"Size: "<<st.size()<<endl;

    // if(st.empty())
    //     cout<<"Stack is Empty"<<endl;
    // else
    //     cout<<"Not Empty"<<endl;       

    // cout<<"-----Printing stack values-----"<<endl;

    // while (!st.empty())
    // {
    //     cout<<st.top()<< " ";
    //     st.pop();
    // }cout<<endl;

    Stack* st = new Stack(5);


    

    return 0;
}