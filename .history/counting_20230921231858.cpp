#include <iostream>
using namespace std;
void counting(int n){
    if(n==0)
    return 1 ;



     counting(n-1);
    cout<<n<<endl;
}

int main(){

  int n;
  cin>>n;
  int ans = counting(n);
  cout<<ans<<endl;

    return 0;
}