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
    ll n,c=0;
    cin>>n;
    ll a[n];
    cin>>a[0];
    for (ll i=1;i<n;i++){
        cin>>a[i];
        if (a[i]<a[i-1]){
            c+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<c;
    return 0;
}
