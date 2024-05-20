#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(),(x).end()
#define ll long long 
void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

void helper(ll first, ll second, int ind, vector<int>& vc, ll& answ){
    
    if(ind == vc.size()) {
        answ = min(answ, abs(first-second));
        return;
    }

    helper(first + vc[ind], second, ind + 1, vc, answ);
    helper(first, second + vc[ind], ind + 1, vc, answ);
}

void solve() {
    int n; cin >> n;
    vector<int> vc(n);
    ll answ = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> vc[i];
    }
    helper(0, 0, 0, vc, answ);
    cout << answ << endl;

}
 
int main() {
    int t; t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
