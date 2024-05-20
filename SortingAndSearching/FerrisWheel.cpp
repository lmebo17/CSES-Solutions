#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long 

void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

void solve() {
    int n; cin >> n; int x; cin >> x;
    vector<int> vc(n);
    for(int i = 0; i < n; i++){
        cin >> vc[i];
        
    }

    sort(vc.begin(), vc.end());

    ll l = 0;
    ll r = n - 1;
    ll cnt = 0;
    
    while(l <= r){
        if(vc[l] + vc[r] <= x){
            l++;
            r--;
        } else {
            r--;
        }
        cnt++;
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
