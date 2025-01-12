#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
 
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl;
#define im_here cerr << "I'm here!"
#define pb push_back
#define lets_go cin.tie(0)->sync_with_stdio(0);

const ll MAXN=1e12;
const int maxn=1e9;

int main(){
    lets_go;
    int t;
    cin >> t;
    while (t--){
        ll a,b;
        cin >> a >> b;
        if ((a == 0 || b == 0) && a != b){
            cout << "NO" << endl;
            continue;
        }
        if (a > 2 * b || b > 2 * a){
            cout << "NO" << endl;
            continue;
        }
        a %= 3;
        b %= 3;
        if (((a == 2) && (b == 1)) || ((a == 0) && (b == 0)) || ((a == 1 && b == 2)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
