#include <iostream>
using namespace std;
int counting(int n){
    if(n==0)
    return 1;


    cout<<n<<endl;

    return counting(n-1);
}

int main(){

  int n;
  cin>>n;
  int ans = counting(n);
  cout<<ans<<endl;
    return 0;
}