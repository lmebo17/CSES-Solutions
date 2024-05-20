#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long 
#define MOD 1000000007
void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

ll fast_pow(ll base, ll power, ll modulo){
    ll answ = 1;
    while(power){
        if(power % 2){
            power--;
            answ = (answ * base) % modulo;
        }
        power /= 2;
        base = (base * base) % modulo;
        
    }
    return answ;
}


void solve() {
    int a, b, c; cin >> a >> b >> c;
    int power = fast_pow(b, c, MOD - 1);
    cout << fast_pow(a, power, MOD) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
