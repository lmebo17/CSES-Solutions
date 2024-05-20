#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(),(x).end()
 
void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

void solve() {
   int n; cin >> n;
   vector<string> res;
   res.push_back("");
   for(int i = 0; i < n; i++){
        int size = res.size();
        for(int j = size - 1; j >= 0; j--){
            res.push_back(res[j]);
        }
        size *= 2;
        for(int j = 0; j < size; j++){
            if(j < size / 2){
                res[j] += "0";
            } else res[j] += "1";
        }
   }

   for(int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
   }

}
 
int main() {
    int t; t = 1;
    while (t--) {
        solve();
    }
}
