//problem link :https://codeforces.com/contest/339/problem/A

#include <bits\stdc++.h>
using namespace std;
int main (){
    string st;
    cin>>st;
    vector<char>v;
    for(int i =0; i< st.size();i+=2) {
        v.push_back(st[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i<v.size()-1)
        cout<<"+";
    }
    cout<<'\n';
    
    return 0;
    
}
