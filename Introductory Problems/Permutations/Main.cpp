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
    ll n;
    cin>>n;
    ll x;
    if (n==1){
        cout<<1;
        return 0;
    }
    if (n<4){
        cout<<"NO SOLUTION";
        return 0;
    }
    if (n==4){
        cout<<"2 4 1 3";
        return 0;
    }
    if (n%2==0){
        x=n/2;
    }
    else{
        x=n/2+1;
    }
    ll num=1;
    cout<<1<<" ";
    for (ll i=0;i<n-1;i++){
        if (i%2==0){
            cout<<num+x<<" ";
            num+=x;
        }
        else{
            cout<<num-x+1<<" ";
            num-=x-1;
        }
    }
    return 0;
}
