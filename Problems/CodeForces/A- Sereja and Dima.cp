//problem link :https://codeforces.com/contest/381/problem/A


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;


int main (){
  fast
    deque<int>deq;
    int n , s =0 , d =0;
    cin>>n;
    
    for (int i=0; i<n; i++) {
        int t;
        cin>>t;
        deq.push_front(t);
    }
    while (!deq.empty()) {
        
        if(deq.back() >= deq.front() || deq.size() == 1 ){
            s+=deq.back();
            deq.pop_back();
            if( deq.empty())
                break;
        }
        else {
            s+=deq.front();
            deq.pop_front();
        }
        if(deq.back() > deq.front()){
            d+=deq.back();
            deq.pop_back();
        }
        else {
            d+=deq.front();
            deq.pop_front();
        }
    }
    cout<<s<<" "<<d<<'\n';
    return 0;
}
 
