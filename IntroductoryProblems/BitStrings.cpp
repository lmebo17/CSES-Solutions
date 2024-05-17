#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

const long MOD = 1000000007;

long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {
        if(power % 2 == 1) { 
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; 
    }
    return result;
}


void solve() {
    int n; cin >> n;
    cout << fast_power(2, n) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
