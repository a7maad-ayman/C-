//problem link :https://codeforces.com/contest/372/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;



int main () {
    fast
    int n ;
    cin>>n;
    vector<int>v(n);
    for ( int i =0 ; i < n ; i ++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int p1 = 0 , p2=(n-1)/2 , ans = 0 ;
    while(p1<n/2 && p2<n){
        if (v[p1]*2<=v[p2])
            p1++ , p2++ , ans++;
        else
            p2++;
    }
    cout<<n-ans;
    return 0 ;
}
   
