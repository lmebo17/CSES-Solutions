#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long 

void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

void solve() {
   int n, m, k; cin >> n >> m >> k;
   vector<int> A(n);
   vector<int> B(m);
   for(int i = 0; i < n; i++){
        cin >> A[i];
   }
   for(int i = 0; i < m; i++){
        cin >> B[i];
   }

    sort(all(A));
    sort(all(B));

    int ans = 0;
    int a = 0;
    int b = 0;

    while(a < n && b < m){
        if(abs(A[a] - B[b]) <= k){
            a++;
            b++;
            ans++;
        } else if(A[a] < B[b]){
            a++;
        } else b++;
    }
    cout << ans << endl;

}

int main() {
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
