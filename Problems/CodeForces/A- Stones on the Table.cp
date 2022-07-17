//problem link :https://codeforces.com/contest/266/problem/A


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;


int main (){
  fast
    int n , count = 0;
    cin>>n;
    string s ;
    cin>>s ;
    for(int i = 0 ; i < n-1 ; i++){
        if(s[i] == s[i+1])
            count++;
        else
            continue;
    }
    cout<<count<<'\n';
    
    return 0;
}
 
