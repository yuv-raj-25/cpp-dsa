#include <iostream>
using namespace std;

int power(int n){
    if(n==0)
    return 1;
    else{
        int small = power(n-1);
        int big = 2*small;
        
    }
}

int main(){

  int n;
  cin>>n;

  int ans = power(n);
  cout<<ans<<endl;
    return 0;
}