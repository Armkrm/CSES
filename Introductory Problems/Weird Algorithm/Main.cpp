#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
#define endl '\n'
#define debug(x) cout<<x,exit(0)
#define pb push_back
#define lets_go cin.tie(0)->sync_with_stdio(0);

vector <ll> ans;

ll solve(ll n){
    if (n == 1){
        return 1;
    }
    if (n % 2 == 0){
        n=n/2;
    }
    else{
        n=n*3+1;
    }
    ans.pb(n);
    return solve(n);
}

int32_t main(){
    lets_go;
    ll n;
    cin>>n;
    solve(n);
    cout<<n<<" ";
    for (ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}