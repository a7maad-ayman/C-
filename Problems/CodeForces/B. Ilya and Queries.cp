//problem link :https://codeforces.com/contest/313/problem/B

#include<bits/stdc++.h>
using namespace std;
const int  N=3e5+50;
int a[N];
int main(){
    int m , l ,r ,cnt=0;
    string s;
    cin>>s>>m;
    for(int i = 1 ; i<s.size(); i++){
        if(s[i-1]==s[i])
             cnt++;
        a[i]=cnt;
    }
    while(m--){
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<'\n';
    }
    
    return 0 ;
}
