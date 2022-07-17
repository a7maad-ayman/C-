//problem link :https://codeforces.com/contest/279/problem/B

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;
bool f ( int num , int t , vector<int>&v){
    vector<ll>pre(v.size()+1 , 0);
    for ( int i = 0 ; i < v.size() ; i ++)
        pre[i+1]= pre[i]+v[i];
    for ( int i = 0 ; i < v.size() ; i ++)
    {
        if (i + num > v.size())
            break;
        ll sum = pre[i+num] - pre[i];
        if (sum <= t)
            return true;
    }
    return false;
}

int main () {
    fast
    int n , t ;
    cin>>n >>t ;
    vector<int>v(n);
    for ( int i =0 ; i < n ; i ++)
        cin>>v[i];
    int st = 0 , en = n ;
    while (st <= en){
        int mid = (st + en)/2;
        if(f(mid , t , v))
            st=mid+1 ;
        else
           en = mid - 1;
    }
    cout<<st - 1 ;
    
    return 0;
}
