#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n *factorial(n-1);
    }
}

int main(){

  int n;
  cin>>
  int factorial_n = factorial(n);
  cout<<"the factorial is "<<factorial_n<<endl;
    return 0;
}