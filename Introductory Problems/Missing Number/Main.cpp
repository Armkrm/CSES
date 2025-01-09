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
    ll n,x;
    cin>>n;
    set <ll> num;
    for (ll i=0;i<n-1;i++){
        cin>>x;
        num.insert(x);
    }
    for (ll i=1;i<n+1;i++){
        if (num.count(i)==0){
            cout<<i;
        }
    }
    return 0;
}
