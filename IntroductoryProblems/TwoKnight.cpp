#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(),(x).end()
 
long long calculate(long long k){
    long long total = (k*k) * (k*k - 1)/2;
    long long attack = 4 * (k-1) * (k-2);
    return total - attack;
}
 
void solve() {
    long long n; cin >> n;
    for(long long i = 1; i <= n; i++){
        cout << calculate(i) << endl;
    } 
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
