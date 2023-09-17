#include <iostream>
using namespace std;
int main()
{
    char ch[10] = {};
    ch[3] =  '\0';
    
    string str = "yuvraj chaudhary";
    str[3] = '\0';
    cout<<ch<<"-"<<str<<endl;

    return 0;
}