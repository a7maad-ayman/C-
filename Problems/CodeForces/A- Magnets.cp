//problem link :http://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

int main (){
  fast
    int n , c = 0 , a = 0 , b = 0;
    cin>> n;
    for(int i = 1 ; i <= n ; i++){
        cin>>a;
        if( a != b)
            c++;
        b = a ;
    }
    cout<<c<<'\n';
    return 0;
}
 
