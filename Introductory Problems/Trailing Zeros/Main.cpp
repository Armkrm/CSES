#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

 
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl;
#define im_here cout << "i'm here!";
#define pb push_back
#define lets_go cin.tie(0)->sync_with_stdio(0);
#define len lenght

ull five_c = 0;

ull analysis(ull i){
    while (i % 5 == 0){
        five_c++;
        i /= 5;
    }
    return 0;
    im_here
}

int32_t main(){
    lets_go;
    ull n;
    cin >> n;
    for (ull i = 5; i <= n; i+=5){
        analysis(i);
    }
    cout << five_c;
    return 0;
}
