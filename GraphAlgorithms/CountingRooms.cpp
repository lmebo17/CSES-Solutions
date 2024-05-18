#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

int n, m;

void dfs(vector<vector<char>>& arr, int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m){
        return;
    }

    cout << i << " " << j << endl;
    if(arr[i][j] != '.'){
        return;
    } 

    arr[i][j] == '#';

    dfs(arr, i + 1, j);
    dfs(arr, i - 1, j);
    dfs(arr, i, j + 1);
    dfs(arr, i, j - 1);
}


void solve() {
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == '.'){
                
                cnt++;
                dfs(arr, i , j);
            }
        }
    }

    cout << cnt << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
