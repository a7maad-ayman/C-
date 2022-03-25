//problem link :https://codeforces.com/contest/112/problem/A


#include <iostream>
#include <algorithm>
#include <string>
using  namespace  std;
void compare(string s1, string s2)
{
    if (s1 != s2)
    {
        if (s1 > s2)
        {
            cout << "1" ;
        }
        else
        {
            cout << " -1 ";
        }
    }
    else
        cout << "0"<< endl;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(), s1.begin(),::tolower);
    transform(s2.begin(),s2.end(), s2.begin(),::tolower);
    compare(s1,s2);
    return 0;
}
