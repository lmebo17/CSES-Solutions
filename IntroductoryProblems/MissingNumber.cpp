#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

void solve() {
    long long n; cin >> n;
    vector<int> vc(n + 1);
    for(int i = 0; i < n - 1; i++){
        int k; cin >> k;
        vc[k]++;
    } 

    for(int i = 1; i <= n; i++){
        if(!vc[i]){
            cout << i << endl;
        }
    }
    
}

int main() {
    int t; t = 1;
    while (t--) {
        solve();
    }
}
