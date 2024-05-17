#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

void solve() {
    unsigned long long row, column;
    cin >> row >> column;

    unsigned long long layer = max(row, column);
    unsigned long answ = (layer - 1) * (layer - 1);

    if(layer % 2){
        if(layer == row){
            answ += column;
        } else {
            answ += 2*layer - row;
        }
    } else {
        if(layer == column){
            answ += row;
        } else {
            answ += 2*layer - column;
        }
    }

    cout << answ << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
