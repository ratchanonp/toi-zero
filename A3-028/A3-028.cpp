#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<vector<char>> grid(n, vector<char>(m, '0'));
    
    while (k--) {
        int r, c;
        cin >> r >> c;
        grid[r][c] = 'x';
        
        for (int dr = -1; dr <= 1; dr++) {
            for (int dc = -1; dc <= 1; dc++) {
                if (dr == 0 && dc == 0) continue;
                
                int nr = r + dr;
                int nc = c + dc;
                
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] != 'x') {
                    grid[nr][nc]++;
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << (j < m-1 ? " " : "");
        }
        cout << '\n';
    }
    
    return 0;
}
