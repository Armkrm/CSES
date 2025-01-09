#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
#define endl '\n'
#define debug(x) cout<<x,exit(0)
#define pb push_back
#define lets_go cin.tie(0)->sync_with_stdio(0);
 
int32_t main(){
    lets_go;
    string s;
    cin >> s;
    ll max_size=0, block_size=1;
    for (ll i = 1; i < s.size() + 1; i++){
        if (s[i]==s[i-1]){
            block_size++;
        }
        if (block_size>max_size){
            max_size=block_size;
        }
        if (s[i]!=s[i-1]){
            block_size=1;
        }
    }
    cout<<max_size;
    return 0;
}