//problem link: https://codeforces.com/contest/231/problem/A

#include <iostream>
using namespace std;
int main(){
   int n ;
   cin>>n;
   int a , b , c ;
   int result=0;
   for (int i =0 ; i<n;i++){
       cin>>a>>b>>c;
       if(a+b+c>=2){
           result++;
       }
   }
   cout<<result;

    return 0 ;
}
