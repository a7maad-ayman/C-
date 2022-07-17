//problem link :https://codeforces.com/contest/731/problem/A


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

int main (){
  fast
    string s ;
    cin>>s;
    int sumMoves = 0 , start=0 ;
    for(int i = 0 ; i<s.length() ; i++){
        int index = s[i]-97;
        int walk = abs(start - index );
        if(walk < 13 )
            sumMoves+=walk;
        else
            sumMoves+= 26 - walk ;
            
     start = index;
    }
    cout<<sumMoves<<'\n';
    return 0;
}
 
