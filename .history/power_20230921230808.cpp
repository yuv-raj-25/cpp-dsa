#include <iostream>
using namespace std;

int power(int n){
    int small;
        int bigpo
    if(n==0)
    return 1;
    else{
        int small = power(n-1);
        int bigpo = 2*small;

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