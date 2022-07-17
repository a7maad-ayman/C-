//problem link:https://codeforces.com/contest/1526/problem/C1 

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    priority_queue<long long ,vector<long long>,greater<long long>>neg;
   long long cur_health=0;
long long ans=0;
    for (int i=0 ; i<n;i++){
        int x;
        cin>>x;
        if(x>=0){
            cur_health+=x;
            ans++;
            continue;
        }
        if(cur_health+x>=0){
            neg.push(x);
            cur_health+=x;
            ans++;
        }
        else {
            if(!neg.empty()&&neg.top()<x){
                cur_health-=neg.top();
                neg.pop();
                neg.push(x);
                cur_health+=x;
            }
        }
        
    }
    cout<<ans<<'\n';
    
    return 0;
}
