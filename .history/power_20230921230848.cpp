#include <iostream>
using namespace std;

int power(int n){
    if(n==0)
    return 1;
    else{
         small = power(n-1);
         bigpo = 2*small;

    }
    return bigpo;
}

int main(){

  int n;
  cin>>n;

  int ans = power(n);
  cout<<ans<<endl;
    return 0;
}