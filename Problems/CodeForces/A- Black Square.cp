//problem link :https://codeforces.com/contest/431/problem/A


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using ll = long long;

int main (){
  fast
    int arr[4] , sum=0;
    for(int i = 0 ; i < 4 ; i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    for(int i = 0 ; i <s.length() ; i++){
        if(s[i] == '1' )
            sum+= arr[0];
        else if (s[i] == '2')
            sum+=arr[1];
        else if (s[i] == '3')
            sum+=arr[2];
        else
            sum+=arr[3];
    }
    cout<<sum<<'\n';
    return 0;
}
 
