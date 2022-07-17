//problem link :https://codeforces.com/contest/59/problem/A


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

int main (){
  fast
    string s ;
    cin>>s;
    int ca = 0 , sm = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] <= 'Z')
            ca++;
        else
            sm++;
    }
    if( sm >= ca)
        for_each(s.begin(), s.end(), [](char & c){
            c = tolower(c);
        });
    else
        for_each(s.begin(), s.end(), [](char&c) {
            c=toupper(c);
        });
    cout<<s<<'\n';
        
    return 0;
}
 
