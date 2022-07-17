//problem link : https://codeforces.com/contest/670/problem/D2


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

bool check (vector<ll> &a , vector<ll>&b ,  ll k  ,  ll num ){
    for(int i = 0 ; i < a.size() ; i ++) {
    ll need = num*a[i];
    if (need<=b[i])
        continue;
    need=need-b[i];
        if(k < need )
            return  false ;
        k=k-need;
    }
    return true ;
}

int main () {
    fast
    int n , k ;
    cin>>n>>k;
    vector<ll> a(n) , b(n);
    for(int i =0 ; i<n;i++){
        cin>>a[i];
    }
    for(int i =0 ; i<n;i++){
        cin>>b[i];
    }
    ll st=0 , en =2e9 , ans =0 ;
    while (st<=en){
        ll mid = (st+en)/2;
        if(check(a , b , k , mid)){
            st=mid+1 ;
            ans = max(ans,mid);
        }
        else
            en=mid-1;
    }
    cout<<ans;
    return 0 ;
}
    
