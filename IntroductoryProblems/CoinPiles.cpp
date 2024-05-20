#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(),(x).end()
 
void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

void solve() {
   int a, b; cin >> a >> b;
   log((a+b) % 3 == 0 && 2*min(a,b) >= max(a,b));

}
 
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
