#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long 

bool in_bounds(int n, int m, int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m);
}

string bfs(vector<vector<char>>& grid, int start_i, int start_j, int end_i, int end_j) {
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    
    queue<pair<int, int>> q;
    q.push({start_i, start_j});
    visited[start_i][start_j] = true;
    
    int dir_i[] = {-1, 1, 0, 0};
    int dir_j[] = {0, 0, -1, 1};
    char dir_char[] = {'U', 'D', 'L', 'R'};
    
    while (!q.empty()) {
        auto [i, j] = q.front();
        q.pop();
        
        if (i == end_i && j == end_j) {
            string path = "";
            while (i != start_i || j != start_j) {
                auto [pi, pj] = parent[i][j];
                if (pi == i - 1 && pj == j) path += 'D';
                else if (pi == i + 1 && pj == j) path += 'U';
                else if (pi == i && pj == j - 1) path += 'R';
                else if (pi == i && pj == j + 1) path += 'L';
                i = pi;
                j = pj;
            }
            reverse(path.begin(), path.end());
            return path;
        }
        
        for (int k = 0; k < 4; ++k) {
            int ni = i + dir_i[k];
            int nj = j + dir_j[k];
            
            if (in_bounds(n, m, ni, nj) && !visited[ni][nj] && grid[ni][nj] != '#') {
                q.push({ni, nj});
                visited[ni][nj] = true;
                parent[ni][nj] = {i, j};
            }
        }
    }
    
    return ""; 
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    int start_i, start_j, end_i, end_j;
    
    for (int i = 0; i < n; i++){
        string line;
        cin >> line;
        for (int j = 0; j < m; j++){
            grid[i][j] = line[j];
            if (grid[i][j] == 'A') {
                start_i = i;
                start_j = j;
            }
            if (grid[i][j] == 'B') {
                end_i = i;
                end_j = j;
            }
        }
    }

    string path = bfs(grid, start_i, start_j, end_i, end_j);

    if (!path.empty()) {
        cout << "YES" << endl;
        cout << path.size() << endl;
        cout << path << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
