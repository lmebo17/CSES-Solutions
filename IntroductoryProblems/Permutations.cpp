#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(),(x).end()
 
void loop(int start, int end){
    for(int i = start; i <= end; i += 2){
        cout << i << " ";
    }
}
 
 
void solve() {
   int n; cin >> n;
   if(n == 1){
        cout << 1 << endl;
        return;
   }
   if(n <= 3){
        cout << "NO SOLUTION" << endl;
        return;
   }
 
   loop(2, n);
   loop(1, n);
    
}
 
int main() {
    int t; t = 1;
    while (t--) {
        solve();
    }
}
