#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
 
#define endl '\n'
#define debug(x) cout<<x,exit(0)
#define pb push_back
#define lets_go cin.tie(0)->sync_with_stdio(0);
 
ull solve(ull x, ull y){
    if (x >= y){
        if (x % 2 == 0){
            return x * x - (y - 1);
        }
        else {
            if (x == 1)
                return 1;
            return (x - 1) * (x - 1) + 1 + (y - 1);
        }
    }
    else {
        if (y % 2 == 1){
            return y * y - (x - 1);
        }
        else {
            return (y - 1) * (y - 1) + 1 + (x - 1);
        }
    }
}

int32_t main(){
    lets_go;
    ull t;
    cin >> t;
    for (ull i = 0; i < t; i++){
        ull x,y;
        cin >> x >> y;
        cout << solve(x, y) << endl;
    }
    return 0;
}