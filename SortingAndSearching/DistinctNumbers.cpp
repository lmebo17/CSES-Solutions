#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long 

void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

void solve() {
    int n; cin >> n;
    vector<int> vc(n);
    for(int i = 0; i < n; i++){
        cin >> vc[i];
    }

    sort(vc.begin(), vc.end());
    int cnt = 1;
    for(int i = 1; i < n; i++){
        cnt += vc[i] != vc[i-1];
    }
    cout << cnt << endl;


}

int main() {
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
