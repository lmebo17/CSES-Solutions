#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(),(x).end()
 
void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

void solve() {
    string str; cin >> str;
    sort(all(str));
    vector<string> result;
    do {
        result.push_back(str); 
    } while (next_permutation(all(str)));

    cout << result.size() << endl;
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }

}
 
int main() {
    int t; t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
