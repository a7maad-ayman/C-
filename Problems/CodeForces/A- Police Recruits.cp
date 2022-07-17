//problem link :https://codeforces.com/contest/427/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;


int main (){
  fast
    int n , u = 0 , b = 0 ;
    cin>>n;
    while(n--){
        int c ;
        cin>>c;
        if ( c > -1 )
            b += c ;
        else if((c == -1) & (b<= 0) )
            u++;
        else
            b --;
    }
    cout<<u<<'\n';
    return 0;
}
