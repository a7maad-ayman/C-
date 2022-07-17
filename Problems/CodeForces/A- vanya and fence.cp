// problem link : https://codeforces.com/contest/677/problem/A
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

int main () {
    fast
    int n , h  , r = 0 ;
    cin >> n >> h;
    while (n--){
        int a;
        cin >> a ;
        if(a<=h)
            r+=1 ;
        else
            r+=2 ;
    }
    cout<<r<<'\n';
    
    return 0;
}

