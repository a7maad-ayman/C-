//problem link : https://codeforces.com/contest/295/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;
const int N=1e5+7;
ll a[N] , q[N] , p[N];

int main () {
    fast
    int n ,m ,k ;
    cin >> n >> m >>k ;
    for (int i =1  ; i<=n ; i++){
        cin>>a[i];
    }
    vector<pair<int, int>>range(m+1);
    vector<ll>val(m+1);
    for(int i =1 ; i<= m ; i++){
        int l , r , x ;
        cin >> l >> r >> x ;
        range[i]= {l , r };
        val[i]=x;
    }
    for( int i =1 ;i<=k ; i++){
        int x ,y ;
        cin >>x>>y ;
        q[x]++;
        q[y+1]--;
    }
    for(int i =1 ; i<=m ; i++){
        q[i]+=q[i-1];
    }
    for (int i =1 ; i<=m ; i++){
        val[i] = val[i]*q[i];
    }
    for ( int i =1 ; i<=m ; i++){
        int l = range[i].first;
        int r =range[i].second;
        p[l]+=(val[i]);
        p[r+1]-=(val[i]);
    }
    for ( int i =1 ; i<=n ; i++){
        p[i]+=p[i-1];
    }
    for ( int i =1 ; i<=n ; i++){
        cout<<p[i]+a[i]<<" ";
        
    }
    return 0 ;
}
