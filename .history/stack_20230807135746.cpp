#include<iostream>
#include<stack>
using namespace std;

class Stack{
    int *arr;
    int top;
    int siz;

public:
    Stack(int s){
        siz = s;
        arr = new int[siz];
        top = -1;
    }

    void push(int x){
        if(top == siz){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    bool isEmpty(){
        if(top == -1){
            return 1;
        }else{
            return 0;
        }
    }

    int size(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return top+1;
    }

    int topVal(){
        if(top != -1){
            return arr[top];
        }else{
            cout<<"No element in stack"<<endl;
            return -1;
        }
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

    Stack st(5);

    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);


    cout<<st.topVal()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<"Size: "<<st.size()<<endl;


    

    return 0;
}