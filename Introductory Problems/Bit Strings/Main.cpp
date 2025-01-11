#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
 
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl;
#define pb push_back
#define lets_go cin.tie(0)->sync_with_stdio(0);

const int MOD = 1e9 + 7; 

int32_t main(){
    lets_go;
    ull res = 1, base = 2, n;
    cin >> n;
    while (n > 0) {
        if (n % 2 == 1) 
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        n /= 2;
    }
    cout << res;
    return 0;
}