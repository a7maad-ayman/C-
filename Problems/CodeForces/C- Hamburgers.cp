//problem link :https://codeforces.com/contest/371/problem/C

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

ll cnt_B = 0 , cnt_C=0 , cnt_S=0;
ll X,Y,Z,A,B,C,R;
bool f ( ll num ){
    ll need_B = cnt_B*num , need_C = cnt_C*num , need_S=cnt_S*num;
    ll cost = 0 ;
    if (need_B > X )
        cost+=(need_B-X)*A;
    if(need_S > Y)
        cost+=(need_S -Y)*B;
    if(need_C > Z)
        cost+=(need_C - Z)*C ;
    if( cost <= R)
        return true;
    return false;
}
int main () {
    fast
    string str ;
    cin>>str;
    for ( int i = 0 ; i< str.size();i++){
        if(str[i]=='B')
            cnt_B++;
        else if (str[i] == 'C')
            cnt_C++;
        else
            cnt_S++;
    }
    cin>>X>>Y>>Z;
    cin>>A>>B>>C;
    cin>>R;
    ll st = 0 , en = 1e13 , ans = 0 ;
    while (st<=en) {
        ll mid = (en+st)/2;
        if (f(mid))
            st=mid+1 , ans = mid;
        else
            en = mid -1 ;
        }
    cout<<ans ;
    return 0 ;
}
