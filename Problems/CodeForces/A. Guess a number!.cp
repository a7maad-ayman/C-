//problem link :https://codeforces.com/contest/416/problem/A


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

int main () {
    fast
    
    int n ;
    cin >> n;
    int l = -2e9 , r = 2e9;
    while(n--){
        string st;
        int num ;
        char c ;
        cin >> st >> num >> c;
        if(st == ">="){
            if(c=='Y')
                l=max(l,num);
            else
                r=min(r,num-1);
        }
        else if(st == "<="){
            if(c=='Y')
                r=min(r,num);
            else
                l=max(num+1 , l);
        }
        else if(st == ">"){
            if(c == 'Y')
                l = max(l,num+1);
            else
                r = min(r , num  );
        }
        else {
            if(c == 'Y')
                r = min(r , num -1 );
            else
                l = max(l , num);
        }
        
    }
    if(l<=r)
        cout<<l<<'\n';
    else
        cout<<"Impossible\n";
    return 0;
}
