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
#define len(x) (x.length())

const ll MAXN=1e12;
const int maxn=1e9;

int main() {
    string s;
    cin >> s;
    map <char, int> count;
    for (char c : s) {
        count[c]++;
    }
    int odd_c = 0;
    char odd_ch = 0;
    for (auto [c, count] : count) {
        if (count % 2 != 0) {
            odd_c++;
            odd_ch = c;
        }
    }
    if (odd_c > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string half = "";
    for (auto [c, count] : count) {
        half += string(count / 2, c);
    }
    string result = half;
    if (odd_c == 1) {
        result += odd_ch;
    }
    reverse(half.begin(), half.end());
    result += half;
    cout << result;
    return 0;
}
