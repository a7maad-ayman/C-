//problem link :https://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;


int main() {
    fast
    int n , count = 0 ;
    cin>>n;
    int homeColour[n] , guestColour[n];
    for ( int i = 0 ; i < n ; i++){
        cin>>homeColour[i]>>guestColour[i];
    }
    for (int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++){
            if(homeColour[i] == guestColour[j] )
                count++;
        }
    }
    cout<<count<<'\n';
    
    
    return 0;
}
