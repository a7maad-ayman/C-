//problem link : https://codeforces.com/contest/433/problem/B
  
#include <iostream>
#include <algorithm>
using namespace std;
int n,m,l,r,ans,x,a[100011];
long long cum1[111111],cum2[111111];
 
int main() {
    cin >>n;
    for (int i=1;i<=n;++i){
        cin >>a[i];
        cum1[i]=cum1[i-1]+a[i];
    }
      sort(a+1,a+n+1);
    for (int i=1;i<=n;++i){
        cum2[i]=cum2[i-1]+a[i];
    }
    cin >>m;
    while (m--){
        cin >>x>>l>>r;
        if (x==1){
            cout <<cum1[r]-cum1[l-1]<<endl;
        }
        else {
           cout <<cum2[r]-cum2[l-1]<<endl;
        }
    }
    return 0;
}
