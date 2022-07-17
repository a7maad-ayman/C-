//problem link :https://codeforces.com/contest/281/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

int main (){
  fast
    string s ;
    cin>>s;
    if (s[0] <= 'Z' )
        cout<<s<<'\n';
    else{
        s[0] = toupper(s[0]);
        cout<<s<<'\n'; }
        
    return 0;
}
