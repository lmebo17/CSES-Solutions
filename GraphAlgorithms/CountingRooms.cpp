#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long 

void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

bool in_bounds(int n, int m, int i, int j){
    return (min(i,j) >= 0 && i < n && j < m);
}

void helper(vector<vector<char>>& grid, int i, int j){
    if (!in_bounds(grid.size(), grid[0].size(), i, j) || grid[i][j] != '.') {
        return;
    }
    grid[i][j] = '#';
    helper(grid, i + 1, j);
    helper(grid, i - 1, j);
    helper(grid, i, j + 1);
    helper(grid, i, j - 1);
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++){
        string line; cin >> line;
        for (int j = 0; j < m; j++){
            grid[i][j] = line[j];
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (grid[i][j] == '.') {
                answer++;
                helper(grid, i, j);
            }
        }
    }

    cout << answer << endl;
}

int main() {
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
