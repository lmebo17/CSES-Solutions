#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

void solve() {
    long long n; cin >> n;
    long long total_sum = n*(n+1)/2;
    if(total_sum % 2){
        cout << "NO" << endl;
        return;
    }

    
    vector<int> vc(n + 1);

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
