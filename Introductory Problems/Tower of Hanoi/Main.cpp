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

ll k = 0;

void toh (int n, int source, int target, int auxiliary) {
    if (n == 1) {
        cout << source << " " << target << endl;
        return;
    }
    toh (n - 1, source, auxiliary, target);
    cout << source << " " << target << endl;
    toh (n - 1, auxiliary, target, source);
}

int32_t main(){
    lets_go;
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    toh(n, 1, 3, 2);
    return 0;
}