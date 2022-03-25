//problem linh : https://codeforces.com/contest/572/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
      //order book
    int n,s;
    cin>>n>>s;
    map<int,int>buy,sell;
    for(int i=0 ; i<n ; i++){
        char d;
        int p,q;
        cin>>d>>p>>q;
        if(d =='B')
            buy[p]+=q;
        else
            sell[p]+=q;
    }
    vector<pair<int,int>>vec;
    int i=0;
    for (auto it=sell.begin() ; it !=sell.end() && i<s; i++,it++) {
        vec.push_back(*it);
    }
    sort(vec.rbegin(), vec.rend());
    for (auto in : vec)
        cout<<"S "<<in.first<<' '<<in.second<<'\n';

    i=0;
    for (auto it=buy.rbegin() ; it !=buy.rend()&& i<s; i++,it++) {
        cout<<"B "<<it->first<<" "<<it->second<<'\n';

    }
    return 0;
}
