#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(),(x).end()
 
void solve() {
   int n; cin >> n;
   int arr[n];
   for(int i = 0; i < n; i++){
        cin >> arr[i];
   }
    long long cnt = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            cnt += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << cnt << endl;
}
 
int main() {
    int t; t = 1;
    while (t--) {
        solve();
    }
}
