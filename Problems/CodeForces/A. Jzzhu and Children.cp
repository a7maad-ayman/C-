//problem link :https://codeforces.com/contest/450/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;
int main () {
    fast
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int mx=0;
    for(int i=0 ; i<n ; i++){
        int trails = ((v[i]+m-1)/m);
        mx=max(mx, trails);
    }
    for (int i = n-1 ; i>= 0 ; i--) {
        int trails = ((v[i]+m-1)/m);
        if (trails==mx){
            cout<< i +1 <<'\n';
            break;
        }
    }
    return 0 ;
}
