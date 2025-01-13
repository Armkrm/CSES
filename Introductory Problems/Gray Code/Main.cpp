#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
#define endl '\n'
#define debug(x) cout<<x,exit(0)
#define pb push_back
#define lets_go cin.tie(0)->sync_with_stdio(0);

void grayCode(int n) {
    ll size = 1 << n;
    for (ll i = 0; i < size; ++i) {
        ll gray = i ^ (i >> 1);
        for (ll j = n - 1; j >= 0; --j)
            cout << ((gray >> j) & 1);
        cout << endl;
    }
}

int32_t main(){
    lets_go;
    ll n;
    cin >> n;
    grayCode(n);
    return 0;
}
