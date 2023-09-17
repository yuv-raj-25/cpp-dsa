#include<iostream>
#include<stack>
#include<map>
 using namespace std;
template <typename T> T power(T m, T n){
if (n == 0) return 1;
T temp = power(m, n/2);
if (n % 2 == 0)
return temp * temp;
else
return m * temp * temp;
}
int main(){
long long m, n;
cout<<"Enter the base: "; cin>>m;
cout<<"Enter the exponent: "; cin>>n;
cout<<endl<<endl;

cout<< "Power of " << m << " is to " << n << " is: " << power(m,n) <<endl;
return 0; }