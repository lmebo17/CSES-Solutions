#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long 
#define MOD 1000000007
void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

ll fast_pow(ll base, ll power){
    ll answ = 1;
    while(power){
        if(power % 2){
            power--;
            answ = (answ * base) % MOD;
        }
        power /= 2;
        base = (base * base) % MOD;
        
    }
    return answ;
}


void solve() {
    int a, b; cin >> a >> b;
    cout << fast_pow(a, b) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
