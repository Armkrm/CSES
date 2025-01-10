#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl;
#define pb push_back
#define lets_go cin.tie(0)->sync_with_stdio(0);
#define len lenght

ll func(ll n){
    return 2*(2*(((n-1)*(n-2))));
}

int32_t main(){
    lets_go;
    ll n,i=1;
    cin>>n;
    while (n>=i){
        cout<<(i*i*(i*i-1)/2)-func(i)<<endl;
        i++;
    }
    return 0;
}
