// problem link : https://codeforces.com/contest/734/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

int main () {
    fast
    int n , a=0 , d = 0 ;
    cin>>n;
    string s ;
    cin>>s;
    for ( int  i = 0 ; i < s.size() ; i++){
        if ( s[i] == 'A' )
            a+=1;
        else
            d+=1 ;
    }
    if ( a > d)
        cout << "Anton\n";
    else if(d > a)
        cout<<"Danik\n";
    else
        cout<<"Friendship\n";
    
    
    
    
    
    return 0 ;
}
