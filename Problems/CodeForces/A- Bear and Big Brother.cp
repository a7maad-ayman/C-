// problem link : https://codeforces.com/contest/791/

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int result = 0 ;
while (a<=b)
    {
    a*=3;
    b*=2;
    result ++;
    }
cout<<result;
    return 0 ;
}
