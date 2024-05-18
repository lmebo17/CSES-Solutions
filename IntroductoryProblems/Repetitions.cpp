#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(),(x).end()
 
void solve() {
   string str; cin >> str;
   int n = str.size();
   int answ = 1;
   int cnt = 1;
   for(int i = 1; i < n; i++){
        if(str[i] == str[i-1]){
            cnt++;
            answ = max(answ, cnt);
        } else cnt = 1;
   }
   cout << answ << endl;
    
}
 
int main() {
    int t; t = 1;
    while (t--) {
        solve();
    }
}
