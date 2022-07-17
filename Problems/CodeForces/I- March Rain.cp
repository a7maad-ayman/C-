//problem link :https://codeforces.com/gym/101028/problem/I


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;
bool f(int length , int n , int k , vector<int> &pos  ) // dist = mid , n = num of satlls  , c = num of cows
{
    int lst = pos[0];
    int ans = 1 ;
    for( int i = 1 ; i < n; i++){
        if ( pos[i]-lst +1  <= length)
            continue;
        lst = pos[i];
        ans++;
    }
    if (ans <=k)
        return true;
    return false;
}
int main () {
    fast
    int t ;
    cin>>t;
    while(t--){
        int n , k ;
        cin>>n>> k ;
        vector<int>v(n);
        for ( int i = 0 ; i <n ; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int st=0 , en=1e9 ,ans = 0;
        while (st<=en) {
            int mid = (st+en)/2;
            if(f(mid , n , k ,v)) {
                en=mid-1 ;
                ans = mid;
                
            }
            else
               st = mid+1;
        }
        cout<<ans <<'\n';
    }
return 0 ;
}
    
