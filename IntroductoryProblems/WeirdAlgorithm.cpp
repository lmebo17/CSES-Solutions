#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

void solve() {
    long long n; cin >> n; cout << n << " ";
    while(n != 1){
        if(n % 2){
            n = 3*n + 1;
        } else n /= 2;
        cout << n << " ";
    }
}

int main() {
    int t; t = 1;
    while (t--) {
        solve();
    }
}
