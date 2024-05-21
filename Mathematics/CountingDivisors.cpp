#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long 
#define MOD 1000000007

int arr[1000005];

void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}



void solve() {
    int n; cin >> n;
    cout << arr[n] << endl;
}

int main() {
    int t;
    cin >> t;

    for(int i = 1; i < 1000005; i++){
        for(int j = i; j < 1000005; j += i){
            arr[j]++;
        }
    }

    while (t--) {
        solve();
    }
    return 0;
}
